//
//  TinhTong.cpp
//  Week1_02
//
//  Created by Nalou Nguyen on 03/04/2021.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int solve(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += i * i;
    return ans;
}

int main() {
    int n;
    cin >> n;
    int result = solve(n);
    cout << result;
    return 0;
}
