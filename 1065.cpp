//
//  main.cpp
//  1065
//
//  Created by 이민석 on 2016. 9. 2..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int hanchi(int n){
    
    int cnt=0;
    
    if(n<100)
        return n;
    else {
        
        for (int i=100; i<=n; i++) {
            int a = i/100;
            int b = i%100/10;
            int c = i%10;
            
            if(b-a == c-b)
                cnt++;
            
        }
        
        cnt += 99;
        
        return cnt;
    }
}

int main(int argc, const char * argv[]) {

    int n;
    
    cin >> n;
    
    cout << hanchi(n) << endl;
    
    return 0;
}
