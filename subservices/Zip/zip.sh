cd ..
cd ..
DIRECTORY=$(pwd)

cd Images

TIMESTAMP=$(date +'%s')

FILENAME=$($!_$TIMESTAMP)

zip -r $FILENAME.zip $1

mv *.zip $DIRECTORY/Archive


