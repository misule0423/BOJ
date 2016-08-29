//
//  main.cpp
//  11052
//
//  Created by 이민석 on 2016. 8. 29..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    
    cin >> n;
    
    int p[10000] = { };
    
    for (int i=1; i<=n; i++) {
        cin >> p[i];
    }
    
    for (int i=2; i<=n; i++) {
        for (int j=0; j<i; j++) {
            if(p[i] < p[i-j] + p[j])
                p[i] = p[i-j] + p[j];
        }
    }
    
    cout << p[n];
    
    
    return 0;
}
