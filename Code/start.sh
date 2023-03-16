#! /bin/sh

gcc -Ofast -g Dig1.c -o Dig1
gcc -Ofast -g Dig2.c -o Dig2
gcc -Ofast -g Dig3.c -o Dig3
gcc -Ofast -g Dig4.c -o Dig4
gcc -Ofast -g Dig5.c -o Dig5
gcc -Ofast -g Dig6.c -o Dig6

python3 main.py
./Dig1 &
./Dig2 &
./Dig3 &
./Dig4 &
./Dig5 &
./Dig6 &