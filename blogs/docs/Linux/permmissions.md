---
sidebar_position: 7
---
As you know, Linux is a **multi-user operating system**, meaning more than one user can log on at the same time.

To identify the current user, 
type
```bash
 whoami.
```
To list the currently logged-on users, type
```bash
who
```
Giving who the -a option will give more detailed information.

In Linux, the command shell program (generally bash) uses one or more startup files to configure the user environment. Files in the /etc directory define global settings for all users, while initialization files in the user's home directory can include and/or override the global settings.

The startup files can do anything the user would like to do in every command shell, such as:

- Customizing the prompt
- Defining command line shortcuts and aliases
- Setting the default text editor
- Setting the path for where to find executable programs

The standard prescription is that when you first login to Linux, /etc/profile is read and evaluated, after which the following files are searched (if they exist) in the listed order:

1. ~/.bash_profile
2. ~/.bash_login
3. ~/.profile 
where ~/. denotes the user's home directory. The Linux login shell evaluates whatever startup file that it comes across first and ignores the rest. This means that if it finds ~/.bash_profile, it ignores ~/.bash_login and ~/.profile. Different distributions may use different startup files.

However, every time you create a new shell, or terminal window, etc., you do not perform a full system login; only a file named ~/.bashrc file is read and evaluated. Although this file is not read and evaluated along with the login shell, most distributions and/or users include the ~/.bashrc file from within one of the three user-owned startup files.

Most commonly, users only fiddle with ~/.bashrc, as it is invoked every time a new command line shell initiates, or another program is launched from a terminal window, while the other files are read and executed only when the user first logs onto the system.

In Linux and other **UNIX-based operating systems**, every file is associated with a user who is the owner. Every file is also associated with a group (a subset of all users) which has an interest in the file and certain rights, or permissions: read, write, and execute.

The following utility programs involve user and group ownership and permission setting: 


Files have three kinds of permissions: read (r), write (w), execute (x). These are generally represented as in rwx. These permissions affect three groups of owners: user/owner (u), group (g), and others (o).

As a result, you have the following three groups of three permissions:

rwx: rwx: rwx
 u:   g:   o

There are a number of different ways to use chmod. For instance, to give the owner and others execute permission and remove the group write permission:

where u stands for user (owner), o stands for other (world), and g stands for group.

This kind of syntax can be difficult to type and remember, so one often uses a shorthand which lets you set all the permissions in one step. This is done with a simple algorithm, and a single digit suffices to specify all three permission bits for each entity. This digit is the sum of:

4 if read permission is desired
2 if write permission is desired
1 if execute permission is desired.
Thus, 7 means read/write/execute, 6 means read/write, and 5 means read/execute.

Let's see an example of changing file ownership using chown, as shown in the screenshot to the right. First, we create two empty files using touch.

Notice it requires sudo to change the owner of file2 to root. The second chown command changes both owner and group at the same time!