#!/bin/bash
# automate simple task using case
# Author ADAMU M. M. aka AdamsGeeky
# Date: 06/07/2022
# modified 06/07/2022
echo 
echo what are your task of the day
echo 
echo 'a = opens source project'
echo 'b = Ecommerce site'
echo 'c = AlX task of the day'
echo 'd = ALX my personal Learning'
echo 
        read choices
        case $choices in
    a) date;;
    b) clear;;
    c) cd ..;;
    d) cd -;;
    e) whoami;;
    f) cat case.bash;;
    *) echo invalid choice - Bye
                esac