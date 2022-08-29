#!/bin/bash
# string comparison 
# Author: ADAMU M. MUHAMMMAD aka AdamsGeeky

RED='\033[0;31m'
GREEN='\033[0;32m'
#PURPLE='\033[0;35m'
#CYAN='\033[0;36m'
#NC='\033[0m'

path='content'
if [ $path == 'content' ]
then 
	echo "${GREEN}yes they are Equal"
else
	echo "${RED}they are not"
fi
