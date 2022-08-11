/**
 * @file 1_MultipleOf3or5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Problem 1: Multiples of 3 or 5
 * @version 0.1
 * @date 2022-08-11
 * @since Thursday; 11:02 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int sum = 0;
    for(unsigned int i = 1; i<1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            cout<<i<<" ";
            sum += i;
        }
    }
    cout<<"\nSum = "<<sum<<endl;
    return 0;
}
