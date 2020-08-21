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
  - `_exit (man 3 getcwd)`
  - `_exit (man 3 getline)`
  - `_exit (man 3 isatty)`
  - `_exit (man 2 kill)`
  - `_exit (man 3 malloc)`
  - `_exit (man 2 open)`
  - `_exit (man 3 opendir)`
  - `_exit (man 3 perror)`
  - `_exit (man 2 read)`
  - `_exit (man 3 readdir)`
  - `_exit (man 2 signal)`
  - `_exit (man 2 stat)`
  - `_exit (man 2 lstat)`
  - `_exit (man 2 fstat)`
  - `_exit (man 3 strtok)`
  - `_exit (man 2 wait)`
  - `_exit (man 2 waitpid)`
  - `_exit (man 2 wait3)`
  - `_exit (man 2 wait4)`
  - `_exit (man 2 write)`

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

## Flow Charts

* Principal function: **_printf()**
![_printf() Flow Chart](https://drive.google.com/uc?export=view&id=1aN-8rwHlt2NkIHIplX4ULX1dhkE5b7er "_printf() Flow Chart")


* Middle Function: **get_function()**

![get_function() Flow Chart](https://drive.google.com/uc?export=view&id=12vfJb7XMQnKZ46oEMLjumfN3DgQ_dcnw "get_function() Flow Chart")


* Helper Function 1: **print_char()**

![print_char() Flow Chart](https://drive.google.com/uc?export=view&id=15p9zDCtmTLbvigioX0GZT29OIsK9bUQm "print_char() Flow Chart")


* Helper Function 2: **print_string()**

![print_string() Flow Chart](https://drive.google.com/uc?export=view&id=1l48y0X_98ILty5c6v-dE8KqbLYw4AAEl "print_string() Flow Chart")


* Helper Function 3: **print_digit()**

![print_digit() Flow Chart](https://drive.google.com/uc?export=view&id=1sCZu-uzpqFSDNL1KRrU6MxD_Q3jXH9N- "print_digit() Flow Chart")


* Helper Function 4: **print_mod()**

![print_mod() Flow Chart](https://drive.google.com/uc?export=view&id=1nCmT8oNo0hyIx8Zo9ucFGRvy7n63HDiA "print_mod() Flow Chart")


## Authors
* **Nelson Arevalo** - [NelsonarevaloF](https://github.com/NelsonarevaloF/)
* **Daniel Garzón** - [Dc-cpu-arch](https://github.com/Dc-cpu-arch/)