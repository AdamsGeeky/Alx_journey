## Environment variables 
are quantities that have specific values which may be utilized by the command shell, such as bash, or other utilities and applications. Some environment variables are given preset values by the system (which can usually be overridden), while others are set directly by the user, either at the command line or within startup and other scripts. 

An environment variable is actually just a character string that contains information used by one or more applications. There are a number of ways to view the values of currently set environment variables; one can type set, env, or export. Depending on the state of your system, set may print out many more lines than the other two methods.
By default, variables created within a script are only available to the current shell; child processes (sub-shells) will not have access to values that have been set or modified. Allowing child processes to see the values requires use of the export command.

**HOME** is an environment variable that represents the home (or login) directory of the user. cd without arguments will change the current working directory to the value of HOME. Note the tilde character (~) is often used as an abbreviation for $HOME. Thus, cd $HOME and cd ~ are completely equivalent statements.

**PATH** is an ordered list of directories (the path) which is scanned when a command is given to find the appropriate program or script to run. Each directory in the path is separated by colons (:). A null (empty) directory name (or ./) indicates the current directory at any given time.- 

- :path1:path2
- path1::path2

In the example :path1:path2, there is a null directory before the first colon (:). Similarly, for path1::path2 there is a null directory between path1 and path2. 

To prefix a private bin directory to your path:

```bash
$ export PATH=$HOME/bin:$PATH
$ echo $PATH
```
/home/student/bin:/usr/local/bin:/usr/bin:/bin/usr

The environment variable **SHELL** points to the user's default command shell (the program that is handling whatever you type in a command window, usually bash) and contains the full pathname to the shell:

**Prompt Statement** (PS) is used to customize your prompt string in your terminal windows to display the information you want. 

PS1 is the primary prompt variable which controls what your command line prompt looks like. The following special characters can be included in PS1:

- \u - User name
- \h - Host name
- \w - Current working directory
- \! - History number of this command
- \d - Date

They must be surrounded in single quotes when they are used, as in the following example:
```bash
$ echo $PS1
$
$ export PS1='\u@\h:\w$ '
```