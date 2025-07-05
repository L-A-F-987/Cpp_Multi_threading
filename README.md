# Cpp Multi Threading

## Purpose 
The purpose of this repository is to provide easy examples of how to manage concurrency and multi threading in c++. Note this is also being made while attempting to improve my own skills so any improvements or comments are welcome.



## Prerequisits 

- C++ 17 
- CMake Version 3.10

## Building 

```
cmake . && make
```

## Incrementation Loop Examples 
Executables to show various methods to approach incrementing a value between/across threads in C++.

### Atomic

This example used an Atomic int which is incremented using a ++, note that it is important to remember this method only works for non-interleaved operations such as incrementing with ++.

- Executable : Atomic_Summation_loop
- Cpp File: Basic_Summation_loop_atomic.cpp

### Mutex

This example used a mutex and standard int to lock the function, preventing other threads from accessing it at the same time. 

- Executable : Mutex_Summation_loop
- Cpp File: Basic_Summation_loop.cpp


## Useful Resources
Helpful resources found during the creation of these examples, I have no ownership or involvement in these resources.

- [Useful Youtube video series on concurrency](https://www.youtube.com/playlist?list=PLvv0ScY6vfd_ocTP2ZLicgqKnvq50OCXM)

