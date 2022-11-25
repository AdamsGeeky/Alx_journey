---
sidebar_position: 4
---
# linux OS
To succeed in Linux command line you need two things

**problem solving** and **Creativity** To explore and Experiment remember your learning to a set of building black to let you build A system of interconnected computer device to obey your bidding you should Asked your self such type of 

**Questions:**

- what if ....?

- can i .....? 

Give it a try and see if it work Great if not see what haven and read carefully and continues try until you get what you went
so the 

**General approach is**
- Create a hypothesis
- Run your command to test
- observe the output if: what is expected Great else: not then continues
- Analyses the output and Adjust your understanding
- Rinse and repeat till you get what your after for

## Basic ways to do so include the use of simple copying with cp and use of the more robust rsync.
Both can be used to synchronize entire directory trees. However, rsync is more efficient, because it checks if the file being copied already exists. If the file exists and there is no change in size or modification time, rsync will avoid an unnecessary copy and save time. Furthermore, because rsync copies only the parts of files that have actually changed, it can be very fast.

p can only copy files to and from destinations on the local machine (unless you are copying to or from a filesystem mounted using NFS), but rsync can also be used to copy files from one machine to another. Locations are designated in the target:path form, where target can be in the form of someone@host. The someone@ part is optional and used if the remote user is different from the local user.

rsync is very efficient when recursively copying one directory tree to another, because only the differences are transmitted over the network. One often synchronizes the destination directory tree with the origin, using the -r option to recursively walk down the directory tree copying all files and directories below the one listed as the source.

rsync is a very powerful utility. For example, a very useful way to back up a project directory might be to use the following command:

```bash
rsync -r project-X archive-machine:archives/project-X
```
Note that rsync can be very destructive! Accidental misuse can do a lot of harm to data and programs, by inadvertently copying changes to where they are not wanted. Take care to specify the correct options and paths. It is highly recommended that you first test your rsync command using the -dry-run option to ensure that it provides the results that you want.

To use rsync at the command prompt, type rsync sourcefile destinationfile, where either file can be on the local machine or on a networked machine; The contents of sourcefile will be copied to destinationfile.

A good combination of options is shown in:
```bash
rsync --progress -avrxH  --delete sourcedir destdir
```

You can use keyboard shortcuts to perform different tasks quickly. The table lists some of these keyboard shortcuts and their uses. Note the case of the "hotkey" does not matter, e.g. doing CTRL-a is the same as doing CTRL-A .

