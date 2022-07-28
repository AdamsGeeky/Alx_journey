#!/bin/bash
# Description: ping the remote servers
# Author: ADAMU M. M. aka AdamsGeeky
# Date: 06/07/2022
# modified: 07/07/2022
# fetch the ips from ip list file  
hosts="/home/adamsgeeky/Documents/ALX/ALX_Software_Engineering/Scripts/Script_code/Script/professional/duc/hostIps"
echo "below are the result of ping from all hosts"
for ip in $(cat $hosts) 
do 
    ping $ip &> /dev/null 
    if [ $? == 0 ]
    then 
    echo $ip connection ok
    else 
    echo $ip connetion not establish
    fi
done