# Question

Why does a lambda with a captured reference lead to a segmentation fault when compiled with gcc but not with clang?

Is there anything wrong with this usage of lambda?

### How to reproduce?

Compile using the commands in `run_me`:

```
g++ -Wall -Wextra -Wpedantic -g -std=c++2a main.cpp -o main_gcc
clang++ -Wall -Wextra -Wpedantic -g -std=c++2a main.cpp -o main_clang
```

Version:
OS: Ubuntu 20.04.6 LTS
gcc: g++ (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0
clang: clang version 10.0.0-4ubuntu1
standard: c++20

### Output

```
$ ./main_gcc 
Segmentation fault (core dumped)

$ ./main_clang 
count: 1
```
