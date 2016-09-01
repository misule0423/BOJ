//
//  main.cpp
//  2747
//
//  Created by 이민석 on 2016. 9. 1..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int f[45] = { 0, };

int fibonacchi(int n){
    
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(f[n] != 0)
        return f[n];
    else
        return f[n] = fibonacchi(n-1) + fibonacchi(n-2);
//    else
//        return fibonacchi(n-1) + fibonacchi(n-2);
}

int main(int argc, const char * argv[]) {

    int n;
    
    cin >> n;
    
    cout << fibonacchi(n) << endl;
    
    return 0;
}
