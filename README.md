# KCL-Calculator
Calculate KCL Values in MKDS and MK7.

Made by Yami (MKGirlism) from https://www.dshack.org.

This is the same KCL Calculator for MKDS and MK7 as before, except that I've unified both calculators into one.

This App was tested on Arch Linux, Manjaro, Ubuntu, Linux Mint, and Windows 10.

Compiling on Linux:
gcc -o kclcalc *.c \`pkg-config --libs --cflags gtk+-2.0\`
