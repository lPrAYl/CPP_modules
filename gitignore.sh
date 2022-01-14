#!/bin/sh
git ls-files -oi --exclude-standard
find . -name .DS_Store -print0 | xargs -0 git rm -f --ignore-unmatch
find . -name *.o -print0 | xargs -0 git rm -f --ignore-unmatch
find . -name *.out -print0 | xargs -0 git rm -f --ignore-unmatch
find . -name test.dSYM -print0 | xargs -0 git rm -rf --ignore-unmatch
find ./build -print0 | xargs -0 git rm -rf --ignore-unmatch
find ./cmake-build-debug -print0 | xargs -0 git rm -rf --ignore-unmatch
find ./.idea -print0 | xargs -0 git rm -rf --ignore-unmatch