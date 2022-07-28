#!/bin/bash
# decision statemet
# Author ADAMU M. M. aka AdamsGeeky
# Date: 06/07/2022
# modified 06/07/2022
ls -l ./check 
if [ $? -eq 0 ] 
then
echo file exist
else 
echo file dose not exit
fi