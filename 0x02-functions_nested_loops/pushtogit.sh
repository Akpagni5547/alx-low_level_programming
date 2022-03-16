#!/bin/bash
git add .
echo “Enter commit message: “
git commit -am "$1"
git push
