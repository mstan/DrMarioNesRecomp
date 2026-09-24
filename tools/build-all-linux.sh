#!/usr/bin/env bash
# Build the two ROM-free Linux AppImages from their committed generated sources.
set -euo pipefail
repo="$(cd "$(dirname "$0")/.." && pwd)"
bash "$repo/tools/build-linux.sh" --region usa "$@"
bash "$repo/tools/build-linux.sh" --region eu "$@"
