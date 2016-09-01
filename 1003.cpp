//
//  main.cpp
//  1003
//
//  Created by 이민석 on 2016. 9. 1..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int z=0, o=0;

int fibonacci(int n) {
    if (n==0) {
        z++;
        return 0;
    } else if (n==1) {
        o++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(int argc, const char * argv[]) {
    
    int t;
    
    cin >> t;
    
    while (t--) {
        
        int n;
        
        cin >> n;
        
        fibonacci(n);
        
        cout << z << " " << o << endl;
        
        z=o=0;
    }
    
    return 0;
}