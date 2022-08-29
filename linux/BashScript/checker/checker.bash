#!/bin/bash
#Automate checker tasks
#Author: ADAMU M. MUHAMMAD aka AdamsGeeky
#Date: Aug 17 2022 

RED='\033[0;31m'
GREEN='\033[0;32m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
#NC='\033[0m'
echo 
echo "Task 1 check ist that fun"
echo
if [ -e ./root ] 
then
	echo -e "${GREEN}case 0 pass ! "
	if [ -e ./root/so_cool ];then
		echo -e "${GREEN}case 1 pass ! !"
	else
	    echo -e "${PURPLE}case 1 fail"
	fi
else
    echo -e "${CYAN}not yet pass the cases !!!"
	echo -e "${RED}case 0 fail "
	echo -e "${RED}case 1 fail "
fi


