#!/bin/bash
if [ "$1" == "" ]; then TIME=10 ; else TIME=$1 ; fi
echo -e "Going to sleep for $TIME second\n"
sleep $TIME 
echo -e "I awoke for $TIME second\n"
