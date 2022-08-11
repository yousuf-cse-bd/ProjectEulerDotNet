/**
 * @file 10_SummationOfPrimes.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17
 * @version 0.1
 * @date 2022-08-11
 * @since Thursday; 11:27 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <cstring>
using namespace std;
/*Find the sum of all the primes below two million.*/
long long int seiveAlgorithm(unsigned int n){
    bool prime[n];
    memset(prime, true, sizeof(prime));
    for(unsigned int p = 2; p*p<=n; p++){
        /*Normally start 2 until sqare_root n*/
        /*If any term is prime then thouse multples all are not prime*/
        if(prime[p] == true){
            for(unsigned int i = p * p; i<= n; i = i + p){
                prime[i] = false;
            }
        }
    }
    long long int sum = 0;
    for(unsigned int p = 2; p <= n; p++){
        if(prime[p] == true){
            cout<<p<<" ";
            sum += p;
        }
    }
    return sum;
}


int main(int argc, char const *argv[]){
    /* code */
    long long int sum = seiveAlgorithm(2000000);
    cout<<"Sum: "<<sum<<endl;
    return 0;
}
