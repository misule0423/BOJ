//
//  main.cpp
//  10871
//
//  Created by 이민석 on 2016. 8. 29..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n, x;
    
    cin >> n >> x;
    
//    공간 복잡도 O(N)이 된다.
//    int *arr = new int[n];
//
//    for (int i=0; i<n; i++) {
//        cin >> arr[i];
//        
//        if(arr[i] < x)
//            cout << arr[i] << " ";
//    }
    
//    공간 복잡도 O(1)이 된다.
    for (int i=0; i<n; i++) {
        int A;
        cin >> A;
        if(A < x)
            
            cout<< A << " ";
    }
    
    return 0;
}
