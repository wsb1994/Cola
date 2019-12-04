
sudo -H  ./subservices/startup.sh
(cd ./Core; ./compile.sh)
(cd ./subservices/Zip/; ./compile.sh)
(cd ./Database; python3 setup.py)
(cd ./Core; ./compile_nonconcurrent.sh)

