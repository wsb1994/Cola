
sudo -H  ./subservices/startup.sh
cd subservices/Zip

g++ -o Zip Zip.cpp
cd ..
cd /Core
g++ -o Cola Cola.cpp


