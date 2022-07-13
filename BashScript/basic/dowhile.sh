#!/bin/bash
# do while loop continually execute a block of statements while a particular condition is true or met
# Author ADAMU M. M. aka AdamsGeeky
# Date: 06/07/2022
# modified 06/07/2022
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

# also same
for i in $(seq 1 2 99); do echo $i ; done
