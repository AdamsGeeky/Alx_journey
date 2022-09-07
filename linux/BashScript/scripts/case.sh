#!/bin/bash
# automate simple task using case
# Author ADAMU M. M. aka AdamsGeeky
# Date: 06/08/2022
# modified 07/09/2022
echo 
echo  "list of command choices"
echo 
echo 'a = date'
echo 'b = clear'
echo 'c = change to parent folder'
echo 'd = change to previous folder'
echo 'e = display user name'
echo 'f = display the content of this file'
echo 
        read choices
        case $choices in
    a) date;;
    b) clear;;
    c) cd ..;;
    d) cd - || exit;;
    e) whoami;;
    f) cat ./case.sh;;
    *) echo invalid choice - Bye
                esac 
                