//
//  6359.cpp
//
//  Created by 이민석 on 2016. 8. 25..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int testCase, n;
    int prison[101];
    
    cin >> testCase;
    
    while(testCase--){
        
        cin >> n;
        
        for (int i=0; i<101; i++) {
            prison[i] = 1;
        }
        
        for (int i=2; i<n+1; i++) {
            for (int j=1; i*j<n+1; j++) {
                prison[i*j-1]++;
            }
        }
        
        int cnt = 0;
        
        for (int i=0; i<n; i++) {
            if(prison[i]%2 == 1)
                cnt++;
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}
