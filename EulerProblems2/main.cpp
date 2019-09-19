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

vector<long> fibonacciBuilder(int n) {
    vector<long> results = {};
    
    for (int i = 0; i < n; i++) {
        if (i < 2) { results.push_back(1); }
        else { results[i] = results[i-1] + results[i-2]; }
    }
    
    return results;
}

int main(int argc, const char * argv[]) {
    int n = 50;
    int total = 0;

    vector<long> result = fibonacciBuilder(n);
    
    for (int i = 0; i < n; i++) {
        long val = result[i];
        cout << val << endl;
        if (val%2 == 0) { total += result[i]; }
    }
    
    cout << "Total is: " << total << endl;
    
    return 0;
}
