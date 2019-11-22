#!/bin/bash

cd Database
DIR=$(pwd)
DT=$(date +%s)
cd ..
cd Zip

IFS=$'\n' read -d '' -r -a lines < images.list
cd ..
cd ..
cd Images

for var in "${lines[@]}"
do
	cd "${var}"
	mv "${var}".zip $DIR/$DT_"${var}".zip
done

