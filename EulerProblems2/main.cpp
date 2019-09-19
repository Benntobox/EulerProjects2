//
//  main.cpp
//  EulerProblems2
//
//  Created by Benjamin Boyle on 9/18/19.
//  Copyright © 2019 Benjamin Boyle. All rights reserved.
//

#include <iostream>
using namespace std;

// add all even values of fibonacci for values up to 4 million

int fibonacciBuilder(int n) {
    int fibVals[n];
    for (int i = 0; i < n; i++) {
        if (i < 2) {
            fibVals[i] = 1;
        }
        else {
            fibVals[i] = fibVals[i-1] + fibVals[i-2];
        }
    }
}

int fibonacci(long n) {
    if (n == 1 or n == 0) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(int argc, const char * argv[]) {
    long initial = 4000000000;
    
    cout << fibonacci(46);
    
    return 0;
}
