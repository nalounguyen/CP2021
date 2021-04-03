//
//  TongSoNguyenTo.cpp
//  Week1_02
//
//  Created by Nalou Nguyen on 03/04/2021.
//

#include <stdio.h>
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int sumPrime(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << sumPrime(n);
}
