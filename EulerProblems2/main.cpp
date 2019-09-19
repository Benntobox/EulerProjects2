//
//  main.cpp
//  EulerProblems2
//
//  Created by Benjamin Boyle on 9/18/19.
//  Copyright © 2019 Benjamin Boyle. All rights reserved.
//

#include <iostream>
using namespace std;
#include <vector>

// add all even values of fibonacci for values up to 4 million
/*
 
 int fibonacci(long n) {
 if (n == 1 or n == 0) {
 return 1;
 }
 else {
 return fibonacci(n-1) + fibonacci(n-2);
 }
 }

 */

long fibonacciBuilder(long len) {
    int total = 0;
    long arr[len];
    
    for (int i = 0; i < len; i++) {
        if (i < 2) { arr[i] = 1; }
        else { arr[i] = arr[i-1] + arr[i-2]; }
    }
    
    for (int i = 0; i < len; i++) {
        long val = arr[i];
        cout << val << endl;
        if (val%2 == 0) { total += val; }
    }
    
    return total;
}

int main(int argc, const char * argv[]) {
    long result = fibonacciBuilder(47);
    cout << "The result is: " << result << endl;
    return 0;
}
