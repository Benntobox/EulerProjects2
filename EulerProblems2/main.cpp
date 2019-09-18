//
//  main.cpp
//  EulerProblems2
//
//  Created by Benjamin Boyle on 9/18/19.
//  Copyright © 2019 Benjamin Boyle. All rights reserved.
//

#include <iostream>
using namespace std;

// add all even values of fibonacci up to 4 million

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
    
    cout << fibonacci(1000);
    
    return 0;
}
