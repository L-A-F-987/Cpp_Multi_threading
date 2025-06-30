#include <mutex>
#include <iostream>
#include <thread>
#include <stdio.h>

//global mutex 

std::mutex main_mutex;

//initialising incrementable variable i
int i = 0; 

//loop to increment a number in c++
void summation_loop(int thread_number,int addition_count){

    for (int x=0;x<addition_count;x++){
        std::unique_lock<std::mutex> mutex_locker(main_mutex);
        i++;
        printf("summation executed:%i\n",thread_number);
        mutex_locker.unlock();
    }
    

}


int main(){

    //generating two summation threads each of which want to access the summation loop function
    std::thread summation_thread_1(summation_loop,1,3);
    std::thread summation_thread_2(summation_loop,2,4);
    //joining the threads
    summation_thread_1.join();
    summation_thread_2.join();

    printf("final_i_value:%i\n",i);
}