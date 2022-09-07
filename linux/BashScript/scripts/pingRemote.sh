#!/bin/bash
# Description: ping the remote server
# Author: ADAMU M. M. aka AdamsGeeky
# Date: 06/08/2022
# modified: 06/08/2022
# con=`ping 127.0.0.1`
host='127.0.0.1'
ping $host &> /dev/null
# /dev/null is a directory on linux that everythig put their will dis appear
# change to ip address to ping
if [ $? == 0 ]
then
echo "connection $host alive ping ok"
else
echo "connetion $host die"
fi