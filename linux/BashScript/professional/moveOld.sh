#!/bin/bash
# Description: Deleting old file
# Author: ADAMU M. M. aka AdamsGeeky
# Date: 06/08/2022
# modified: 06/08/2022

find /c/developments/ALX_software/Script/professional/ -mtime +90 -exec mv {} ./old \;
# {} means all result of find commad
# -exec means execute 
# mv move 
# ./old to folder name old