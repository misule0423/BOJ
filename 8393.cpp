//
//  main.cpp
//  8393
//
//  Created by 이민석 on 2016. 8. 29..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    int n = 0;
    
    cin >> n;
    
    for (int i=1; i<n+1; i++) {
        n += i;
    }
    
    cout << n << endl;
    
    
    return 0;
}
