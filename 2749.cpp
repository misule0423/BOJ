//
//  main.cpp
//  2749
//
//  Created by 이민석 on 2016. 9. 1..
//  Copyright © 2016년 Roop. All rights reserved.
//

//피사노 주기를 아는 경우!!
//정의 : F(N) % M = F(N%P) % M
//만약 M = 10^k 일때, k>2 라면, 주기는 항상 15 * 10 ^ (k-1)이 된다.
#include <iostream>
using namespace std;

int mod = 1000000;
int p = mod/10*15;
int f[1500000] = { 0, 1 };

int main(int argc, const char * argv[]) {
    
    long long n;
    
    cin >> n;
    
  
    for (int i=2; i<p; i++) {
        f[i] = f[i-1] + f[i-2];
        f[i] %= mod;
    }
    
    cout << f[n%p] << '\n';
    
    return 0;
}
