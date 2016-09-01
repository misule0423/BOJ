//
//  main.cpp
//  10870
//
//  Created by 이민석 on 2016. 9. 1..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int fibonacchi(int n){
    
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonacchi(n-1) + fibonacchi(n-2);
}

int main(int argc, const char * argv[]) {
    
    int k;
    
    cin >> k;
    
    cout << fibonacchi(k) << endl;
    
    return 0;
}
