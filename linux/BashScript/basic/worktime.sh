#!/bin/bash
# working with system time
# Author ADAMU M. M. aka AdamsGeeky
# Date: 06/07/2022
# modified 06/07/2022

count=0
num=10
while [ $count -lt 10 ]
do 
    echo
    echo $num seconds left to tep out $1
    echo
    sleep 1
num=`expr $num - 1`
count=`expr $count + 1`
done
echo
echo $1 process is stopped !!!