You can create customized commands or modify the behavior of already existing ones by creating aliases. Most often, these aliases are placed in your **~/.bashrc** file so they are available to any command shells you create. unalias removes an alias.

Typing 
```bash
alias
```
 with no arguments will list currently defined aliases.

Please note there should not be any spaces on either side of the equal sign and the alias definition needs to be placed within either single or double quotes if it contains any spaces.

Typing long commands and filenames over and over again gets rather tedious, and leads to a lot of trivial errors, such as typos.

Deploying aliases allows us to define shortcuts to alleviate the pain of all of this typing.

Suppose you are a member of a project team that works in a common, shared directory for your project. This directory is located in 

**~/Documents/Alxsotups/Alx_holberlton_S_Eng_journey/blogs**

When you are working on Project X, you often need to create and modify your files in this directory. It does not take too long before typing in: 
```bash
cd /home/Documents/Alxsotups/Alx_holberlton_S_Eng_journey/blogs
```
gets tedious.

Define and use an alias named "projx" to do the above cd command for you.
```bash
alias alx='cd ~/Documents/Alxsotups/Alx_holberlton_S_Eng_journey/blogs'
```

