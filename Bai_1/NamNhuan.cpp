//
//  NamNhuan.cpp
//  Bai_1
//
//  Created by Nalou Nguyen on 31/03/2021.
//

#include <stdio.h>
#include <iostream>
using namespace std;
  
int main() {
    int x;
    cin >> x;
    if (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}  
