//
//  ChuSoLonNhat.cpp
//  Week1_02
//
//  Created by Nalou Nguyen on 03/04/2021.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int maxDigit(int n) {
    int ans = -1;
    while (n > 0) {
        if (ans < n % 10)
            ans = n % 10;
        n = n / 10;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << maxDigit(n);
    return 0;
}
