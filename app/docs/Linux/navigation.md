---
sidebar_position: 5
---
# navigation
## There are two ways to identify paths:
1. Absolute pathname
An absolute pathname begins with the root directory and follows the tree, branch by branch, until it reaches the desired directory or file. Absolute paths always start with /.
2. Relative pathname
A relative pathname starts from the present working directory. Relative paths never start with /.

Multiple slashes (/) between directories and files are allowed, but all but one slash between elements in the pathname is ignored by the system. **////usr//bin** is valid, but seen as /usr/bin by the system.
Most of the time, it is most convenient to use relative paths, which require less typing. 

Usually, you take advantage of the shortcuts provided by: 

##  . (present directory)
##  .. (parent directory) 
##   ~ (your home directory).
For example, suppose you are currently working in your home directory and wish to move to the /usr/bin directory. The following two ways will bring you to the same directory from your home directory:
Absolute pathname method
```bash
 cd /usr/bin
```
Relative pathname method
```bash
cd ../../usr/bin
```
