# linux OS
To succeed in Linux command line you need two things
- problem solving and  Creativity
To explore and Experiment remember your learning to a set of building black to let you build A system of interconnected computer device to obey your bidding
you should Asked your self such type of Questions:
- what if ....?
- can i  .....?		
Give it a try and see if it work Great if not see what haven and read carefully and continues try until you get what you went
----
## so the General approach is  
- Create a hypothesis
- Run your command to test
- observe the output
  	if: what is expected Great
	else: not then continues
- Analyses the output and Adjust your understanding
- Rinse and repeat till you get what your after for
---
# THE SHELL
within a terminal you have what is known as shell
**SHELL** in computing shell is a computer program that exposes an operating system's  services to the a human user or a another program.
 **SHELL** is a part of operating system that defines how the terminal will behave and looks after running the command for you. There are various shells but hare we used the most common one of them all **BASH**
# THE BASH stand for Bourne Again Shell  
An enhanced version of original unix shell program sh written by **STEVE BOURNE** 
## shells is either 
- GUI Graphical user interface such as:
  1. windows
  2. GNOME for Ubuntu linux 
  3. KDE for ... linux
- CLI command line interface
  -  windows cli
  - power shell
  - CMD  
# some various linux shells include:
 - sh
 - bash
 - rbash
 - dash
 - zsh
	
***
# TERMINAL what is a terminal
its a program that opens a window and let you interact with the shell.	there are a bunch of different terminal depending on our linux distribution some of them are:
- gnome-terminal
- konsole
- xterm
- terminator

## to know the shell that is currently running in your terminal
```bash
echo $SHELL
```
**echo** is the command used to display a message in a linux terminal
## to know the shells that are present in your linux operating system 
```bash
cat /etc/shells
```
**cat** stand for concatenations that is to joint a content of two file together, but is basic function is also used to display the 
content of a file in the terminal

***

 # [x] Terminal
 # [x] The Command Line 
 # [x] Basic Navigation 
 # [x] More About Files 
 # [x] Manual Pages 
 # [x] File Manipulation
creating file
```bash
   touch filename
```
deleting
```bash
   rm filename
```
rename
```bash
   mv oldname newname
```
copy
```bash
  cp source destination
```
move files and directories.
```bash
   mv source destination
```
 # [x] Vi Text Editor
	- [x] open file
	- [x] inserting
	- [x] editing
	- [x] save and exiting
 # [ ] Wildcards 
 # [ ] Permissions 
 # [ ] Filters 
 # [ ] Grep and Regular Expressions 
 # [ ] Piping and Redirection
 # [ ] Process Management
 # [ ] Scripting 

# Exit Status 
## to check echo $?(for last commad excuted)

- [x] 0 = ok or successful
- [x] 1 = minor problem
- [x] 2 = serious troubles 2
- [x] 3 - 225 = everything else

- [Case](case.bash)
- 
# [Accessing Data from a file](/professional/pingHosts.bash)
