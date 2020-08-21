# Simple Shell

## Summary

**#cisfun$ shell** - This is the develop of a basic shell, with all it's functions. 
Made in Holberton Schooll by [Nelson Arevalo](https://github.com/NelsonarevaloF) && [Daniel Garzón](https://github.com/Dc-cpu-arch)


## Resources:books:
Read or watch:
* [Unix shell](https://intranet.hbtn.io/rltoken/RsZhUQ_26du3YUYKXO3gXA)
* [Everything you need to know to start coding your own shell](https://intranet.hbtn.io/rltoken/NLmjz6DsgyNjdD7GwL6VRA)
* [Writing a Unix Shell](https://indradhanush.github.io/blog/writing-a-unix-shell-part-1/)

## Learning Objectives:bulb:
What you should learn from this project:

* Write your own Shell.
* Team work.
* Drawing flowcharts.

## Initial Requirements for the project

  - Allowed editors: vi, vim, emacs
  - All your files will be compiled on Ubuntu 14.04 LTS
  - Programs and functions will be compiled with gcc 4.8.4 using the flags **-Wall -Werror -Wextra** and **-pedantic**
  - All your files should end with a new line
   - No more than 5 functions per file
  - All the files end with a new line
  - Shell should not have memory leaks
  - No more than 5 functions per file
  - All your header files should be include guarded
  - Use system calls only when you need to

## Authorized functions and system calls

  - `access (man 2 access)`
  - `chdir (man 2 chdir)`
  - `close (man 2 close)`
  - `closedir (man 3 closedir)`
  - `execve (man 2 execve)`
  - `exit (man 3 exit)`
  - `fflush (man 3 fflush)`
  - `fork (man 2 fork)`
  - `free (man 3 free)`
  - `getcwd (man 3 getcwd)`
  - `getline (man 3 getline)`
  - `isatty (man 3 isatty)`
  - `kill (man 2 kill)`
  - `malloc (man 3 malloc)`
  - `open (man 2 open)`
  - `opendir (man 3 opendir)`
  - `perror (man 3 perror)`
  - `read (man 2 read)`
  - `readdir (man 3 readdir)`
  - `signal (man 2 signal)`
  - `stat (man 2 stat)`
  - `lstat (man 2 lstat)`
  - `fstat (man 2 fstat)`
  - `strtok (man 3 strtok)`
  - `wait (man 2 wait)`
  - `waitpid (man 2 waitpid)`
  - `wait3 (man 2 wait3)`
  - `wait4 (man 2 wait4)`
  - `write (man 2 write)`

## Compilation
  -  Shell will be compiled this way:
  ```$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh```

## Testing
  -  Shell should work like this in interactive mode:
  ```$ ./hsh
     ($) /bin/ls
     hsh main.c shell.c
     ($)
     ($) exit
     $```

  -  But also in non-interactive mode:
  ```
  $ echo "/bin/ls" | ./hsh
  hsh main.c shell.c test_ls_2
  $
  $ cat test_ls_2
  /bin/ls
  /bin/ls
  $
  $ cat test_ls_2 | ./hsh
  hsh main.c shell.c test_ls_2
  hsh main.c shell.c test_ls_2
  $
  ```
*******************************************************************************

### Example of the shell working:
```
random_user@ubuntu:~/shell$ ./shell
#cisfun$ ls
./shell: No such file or directory
#cisfun$ /bin/ls
env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ /bin/ls -l
./shell: No such file or directory
#cisfun$ ^[[D^[[D^[[D
./shell: No such file or directory
#cisfun$ ^[[C^[[C^[[C^[[C
./shell: No such file or directory
#cisfun$ exit
./shell: No such file or directory
#cisfun$ ^C
random_user@ubuntu:~/shell$ echo "/bin/ls" | ./shell
#cisfun$ env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ random_user@ubuntu:~/shell$
```

## Authors
* **Nelson Arevalo** - [NelsonarevaloF](https://github.com/NelsonarevaloF/)
* **Daniel Garzón** - [Dc-cpu-arch](https://github.com/Dc-cpu-arch/)