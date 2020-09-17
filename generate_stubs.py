#!/usr/bin/env python
import pprint
import sys
import re

from CppHeaderParser import CppParseError, CppHeaderParser
CppHeaderParser.print_warnings = 0


keywords = ['from']

def get_parameter_type(parameter_type):
  match = re.match('(?:const)?\s*(.*?)\s*\*\s*', parameter_type)
  if match:
    class_name = match.groups()[0]
    return class_name
  else:
    return parameter_type

def sanitize_parameter_name(parameter):
  sanitized = parameter['name']
  if not sanitized:
    sanitized = get_parameter_type(parameter['type']) + '_'
  if sanitized in keywords:
    sanitized = sanitized + '_'
  return sanitized

def parse_doxygen(doc):
  doc = doc.strip('\n')
  doc = doc.lstrip('/*!')
  doc = doc.rstrip('*/')
  doc = doc.strip('\n')
  doc = re.sub(r'\s\\.+?\s+', ' ', doc)
  clean_doc = []
  for line in doc.splitlines():
    clean_doc += [line.lstrip(' ')]
  
  return '\n'.join(clean_doc)

def generate_method(m):
  method_str = ''
  doc_string = ''
  if 'doxygen' in m:
    doc_string = "\n    \"\"\"%s\"\"\"" % parse_doxygen(m['doxygen'])
  is_static = bool(m['static'])
  parameters = m['parameters']
  method_name = m['name']
  if parameters:
    parameters = ', '.join(map(lambda p: sanitize_parameter_name(p), parameters))
  else:
    parameters = ''
  if is_static:
    method_str += '  @staticmethod\n  def %s(%s):%s\n    ...\n' % (m['name'], parameters, doc_string)
  else:
    if m['name'] == class_name:
      method_name = '__init__'
    if parameters:
      parameters = ', ' + parameters
    method_str = '  def %s(self%s):%s\n    ...\n' % (method_name, parameters, doc_string)
  return method_str

if __name__ == '__main__':
  try:
      cpp_header = CppHeaderParser.CppHeader("./coin_SoNode.h")
  except CppParseError as e:
      print(e)
      sys.exit(1)

  print('from typing import overload, Union\n')
  
  for class_name in cpp_header.classes.keys():
    if not (class_name.startswith('Sb') or class_name.startswith('So')):
      continue
    class_object = cpp_header.classes[class_name]
    bare_name = class_object['bare_name']
    if bare_name != class_name:
      continue
    parent_class = class_object['inherits']
    if len(parent_class) > 1:
      raise Error('Multiple inheritance not supported')
    if parent_class:
      parent_name = parent_class[0]['class']
      print('class %s(%s):' % (class_name, parent_name))
    else:
      print('class %s:' % class_name)
    methods = class_object['methods']['public']
    props = class_object['properties']['public']
    enums = class_object['enums']['public']
    for enum in enums:
      print('  # %s' % enum['name'])
      for value in enum['values']:
        print('  %s: "SoSFEnum" = ...' % value['name'])
    if len(methods) + len(props) == 0:
      print('  ...')
    else:
      methods_map = {}
      for m in methods:
        method_name = m['name']
        if method_name.startswith('operator'):
          continue
        if method_name not in methods_map:
          methods_map[method_name] = []
        methods_map[method_name] += [m]
      for method_name in methods_map.keys():
        method_list = methods_map[method_name]
        for method in method_list:
          if len(method_string_list) > 1:
            print('  @overload')
          print(generate_method(method))
      for p in props:
        is_static = bool(p['static'])
        if not is_static:
          print('  %s: %s = ...' % (p['name'], get_parameter_type(p['type'])))
