#!/bin/bash
cd ..
cd ..
cd Images
cd $1

zip -r $1.zip * $1
find -type f -name '*png*' -delete
find -type f -name '*jpeg*' -delete
find -type f -name '*jpg*' -delete
find -type f -name '*gif*' -delete

