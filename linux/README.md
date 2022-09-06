# linux OS
	To succeed in Linux command line you need two things
	- problem solving and  Creativity
	To explore and Experiment remember your learning to a set of building black to let you build 
        A system of interconnected computer device to obey your bidding
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
	- **SHELL** in computing shell is a computer program that exposes an operating system's  services to the a human user or a another program.
		## shells is either 
			- GUI Graphical user interface 
				such as:
				-  windows
				- GNOME for Ubuntu linux 
				- KDE for ....... linux
			- CLI command line interface
            	- # windows cli
            	    - power shell
            	    - CMD  
  			    # some various linux shells include:
                    - sh
                    - bash
                    - rbash
                    - dash
                    - zsh
	- **SHELL** is a part of operating system that defines how the terminal will behave and looks after running the command
 		for you. There are various shells but hare we used the most common one of them all **BASH**
# THE BASH stand for Bourne Again Shell  
	An enhanced version of original unix shell program sh written by **STEVE BOURNE** 
***
# TERMINAL what is a terminal
	its a program that opens a window and let you interact with the shell.
	there are a bunch of diffrent terminal depending on our linux distribution some of them are:
	- gnome-terminal
	- konsole
	- xterm
	- terminator

## to know the shell that is currently running in your terminal
	*echo $SHELL*
	## **echo** is the command used to display a message in a linux terminal
## to know the shells that are present in your linux operating system 
	*cat /etc/shells*
	## **cat** stand for concatened that is to joint a content of two file together, but is basic function is also used to display the 
	content of a file in the terminal

 	

***

 # The Command Line *What is it, how does it work and how do I get to one.*
 ## Basic Navigation - An introduction to the Linux directory system and how to get around it.
 ## More About Files - Find out some interesting characteristics of files and directories in a Linux environment.
 ## Manual Pages - Learn how to make the most of the Linux commands you are learning.
 ## File Manipulation - How to make, remove, rename, copy and move files and directories.
 ## Vi Text Editor - Discover a powerful Linux based text editor.
 ## Wildcards - Also referred to as globbing, this is a means to refer to several files in one go.
 ## Permissions - Learn to identify and change the permissions of files and directories and what the consequences of these are.
 ## Filters - An introduction to various commands that allow us to mangle data in interesting and useful ways.
 ## Grep and Regular Expressions - Master a powerful pattern matching language that is useful for analysing and processing data.
 ## Piping and Redirection - Join commands together in powerful combinations.
 ## Process Management - See what is currently running on your Linux system and what state the system is in, learn how to kill programs that have hung and put jobs in the background.
 ## Scripting 

***
 # [x] Terminal
 # [x] The Command Line 
 # [x] Basic Navigation 
 # [x] More About Files 
 # [x] Manual Pages 
 # [x] File Manipulation
    ##  creating file
         ```bash
         touch filename
         ```
	## deleting
         ```bash
         rm filename
         ```
    ## rename
         ```bash
         mv oldname newname
         ```
    ## copy
        ```bash
         cp source destination
        ```
    ## and move files and directories.
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
