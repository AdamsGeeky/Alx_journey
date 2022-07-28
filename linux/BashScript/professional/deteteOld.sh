#!/bin/bash
# Description: Deleting old file
# Author: ADAMU M. M. aka AdamsGeeky
# Date: 06/08/2022
# modified: 06/08/2022

find /home/adamsgeeky/Downloads -mtime +90 -exec ls -l {} \;
