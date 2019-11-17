#!/bin/bash
neofetch
sleep 4
date +%s | cat > log.txt
echo "this environment was setup at the above epoch timestamp"

apt-get install spotify-client -y 
apt-get install git -y
apt-get install python3 -y
apt-get install python3-pip -y
apt-get purge libreoffice -y
snap install gotop -y


apt-get install libreoffice -y

apt-get install vmware

pip3 install pandas
pip3 install tensorflow
pip3 install python-twitter
pip3 install python-opendb
