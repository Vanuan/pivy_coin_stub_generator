#!/usr/bin/env bash
set -e
cd $(dirname $0)

docker-compose build standardese
docker-compose run --rm standardese $@
