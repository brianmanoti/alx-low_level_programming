#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
ranlib libmy.a
ar -t libmy.a
