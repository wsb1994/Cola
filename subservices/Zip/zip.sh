#!/bin/bash
cd ..
pwd
cd ..
pwd
cd Images
cd $1

zip -r $1.zip * $1
