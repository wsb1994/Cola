#!/bin/bash

#Adjust directory and set datetime
cd Database
DIR=$(pwd)
DT=$(date +%s)
cd ..
cd Zip
#read from the images list
IFS=$'\n' read -d '' -r -a lines < images.list
cd ..
cd ..
cd Images

#zip every image folder and add a date and time
for var in "${lines[@]}"
do
	cd "${var}"
	mv "${var}".zip $DIR/$DT_"${var}".zip
done

