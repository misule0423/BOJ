//
//  main.cpp
//  11047
//
//  Created by 이민석 on 2016. 8. 29..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n, k;
    int arr[11];
    
    cin >> n >> k;
    
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int sum = 0;
    int m = 1;
    
    while(k!=0){
        
        int count;
        
        if((count = k/arr[n-m]) != 0){
            k = k - arr[n-m]*count;
            sum += count;
        }
        
        m++;
    }
    
    cout << sum;
    
    return 0;
}
