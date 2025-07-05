#include <mutex>
#include <iostream>
#include <thread>
#include <stdio.h>

//global mutex 

std::mutex main_mutex;

//initialising incrementable variable i
int i = 0; 

//loop to increment a number in c++
void summation_loop(){

    std::unique_lock<std::mutex> mutex_locker(main_mutex);
    i++;
    mutex_locker.unlock();
    

}


int main(){

    //generating two summation threads each of which want to access the summation loop function
    std::thread summation_thread_1(summation_loop);
    std::thread summation_thread_2(summation_loop);
    //joining the threads
    summation_thread_1.join();
    summation_thread_2.join();

    printf("Final Value:%i\n",i);
}