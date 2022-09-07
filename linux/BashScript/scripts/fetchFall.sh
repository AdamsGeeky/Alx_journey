#!/bin/bash
# Description: fetch faille from log file 
# Author: ADAMU M. M. aka AdamsGeeky
# Date: 06/08/2022
# modified: 06/08/2022
grep -i fall /var/log/syslog > /home/adamsgeeky/Script/output/outputfall
