//
//  6359usingBitset.cpp
//
//  Created by 이민석 on 2016. 8. 25..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int testCase;
    
    cin >> testCase;
    
    bitset<101> bit;
    
    while(testCase--){
        
        int n;
        
        cin >> n;
        
//        bit.set()은 전체 비트 1로 세트, bit.reset()은 전체 비트 0으로 리셋
        bit.set();
        
        for (int i=2; i<=n; i++) {
            for (int j=i; j<=n; j+=i) {
                bit[j].flip();
            }
        }
        
        cout << bit.count() -101 + n << endl;
        
    }
    
    return 0;
}
