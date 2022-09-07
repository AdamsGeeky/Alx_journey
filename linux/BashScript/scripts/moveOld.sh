#!/bin/bash
# Description: move old file
# Author: ADAMU M. M. aka AdamsGeeky
# Date: 06/08/2022
# modified: 07/09/2022

find /home/adamsgeeky/Downloads -mtime +90 -exec mv {} ./old \;
# {} means all result of find commad
# -exec means execute 
# mv move 
# ./old to folder name old