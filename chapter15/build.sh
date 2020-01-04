#/bin/bash

DIR="src"
gcc -c -o ${DIR}/sub.o ${DIR}/sub.c
gcc ${DIR}/main.c ${DIR}/sub.o
