#!/bin/bash
# For loops keep running until specified number of variable
# Author ADAMU M. M. aka AdamsGeeky
# Date: 06/07/2022
# modified 06/07/2022
# one usege of for
echo
for i in Musa Fadila Aishat Nafisa Usman 
do 
echo "welcome $i nice meet you"
done
echo
echo
# another usage it 
for ((counter == 1; counter <= 5; counter++)) do
echo "welcome $counter times"
done
echo
# also another it usage
echo
for i in {1..10} 
do
echo "reapet $i times"
done
echo
# even number 1 100
for i in {1..99..2}
do
   echo $i
done
