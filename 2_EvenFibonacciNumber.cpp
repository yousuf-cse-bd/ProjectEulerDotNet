/**
 * @file 2_EvenFibonacciNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Problem 2: Even Fibonacci numbers sum of them
 * @version 0.1
 * @date 2022-08-11
 * @since Thursday; 10:21 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int n = 4000000;
    unsigned int firstTerm, secondTerm, thirdTerm, sum;
    sum = 0;
    firstTerm = 1;
    secondTerm = 2;
    while(firstTerm <= n){
        cout<<firstTerm<<" ";
        if(firstTerm % 2 == 0){
            sum += firstTerm;
        }
        thirdTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = thirdTerm;
    }
    cout<<"\nSum = "<<sum<<endl;
    return 0;
}
