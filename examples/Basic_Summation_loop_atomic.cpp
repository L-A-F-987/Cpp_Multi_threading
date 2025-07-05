#include <mutex>
#include <iostream>
#include <thread>
#include <atomic>
#include <stdio.h>

//initialising incrementable variable i
static std::atomic<int> i = 0;



void summation_loop(){
    
    i++;

}

int main(){

    //generating threads and performing summation
    std::thread summation_thread_1(summation_loop);
    std::thread summation_thread_2(summation_loop);

    //joining
    summation_thread_1.join();
    summation_thread_2.join();


    std::cout<<"Final_Total = "<<i<<"\n";

    return 1;
}