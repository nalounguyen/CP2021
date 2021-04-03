//
//  DemSoLuongChuSo.cpp
//  Week1_02
//
//  Created by Nalou Nguyen on 03/04/2021.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int countDigit(int n) {
    int ans = 0;
    while (n > 0) {
        n = n / 10;
        ans++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << countDigit(n);
    return 0;
}
