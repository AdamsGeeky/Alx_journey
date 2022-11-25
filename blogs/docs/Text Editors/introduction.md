---
sidebar_position: 1
---


By now, you have certainly realized Linux is packed with choices; when it comes to text editors, there are many choices, ranging from quite simple to very complex, including:

- nano
- gedit
- vi
- emacs.
  
Sometimes, you may want to create a short file and don't want to bother invoking a full text editor. In addition, doing so can be quite useful when used from within scripts, even when creating longer files. You will no doubt find yourself using this method when you start **shell scripting!**

If you want to create a file without using an editor, there are two standard ways to create one from the command line and fill it with content.

The first is to use echo repeatedly:
```bash
$ echo line one > myfile
$ echo line two >> myfile
$ echo line three >> myfile
```
Note that while a single greater-than sign (>) will send the output of a command to a file, two of them (>>) will append the new output to an existing file.

The second way is to use cat combined with redirection:
```bash
$ cat << EOF > myfile
> line one
> line two
> line three
> EOF
$
```
Both techniques produce a file with the following lines in it:

line one
line two
line three

and are extremely useful when employed by scripts.