#include <mutex>
#include <iostream>
#include <stdio.h>

//global i variable for use in summing
int i = 0;
//loop to increment a number in c++
void summation_loop(){
    
    i++;

}


int main(){
    
    for(int x = 0; x<10;x++){
        summation_loop();
    }

    printf("final_i_value:%i\n",i);
}