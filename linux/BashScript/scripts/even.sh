#!/bin/bash
# displaying even number using loops
# Author ADAMU M. M. aka AdamsGeeky
# Date: 06/08/2022
# modified 07/09/2022
c=1
while [ $c -lt 5 ]
do 
    echo "welcome $c times"
    (( c++ ))
done
# Odd number
i=1
while [ $i -le 100 ]
do
    echo $i
    i=$((i+2))
done

# alternative
for i in $(seq 1 2 99); do echo $i ; done
