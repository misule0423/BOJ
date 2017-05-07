//
//  main.cpp
//  BOJ_10818
//
//  Created by 이민석 on 2017. 5. 7..
//  Copyright © 2017년 이민석. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <limits.h>
using namespace std;


int main(int argc, const char * argv[]) {
    
//    sol2) 내가 궁금한 것은 최소값, 최대값이기 때문에 굳이 값을 배열에 저장할 필요가 없다.
    int n;
    
    scanf("%d", &n);
    
    int max = INT_MIN;
    int min = INT_MAX;
    
    int temp;
    
    for (int i=0; i<n; i++) {
        
        scanf("%d", &temp);
        
        if(temp > max) max = temp;
        if(temp < min) min = temp;
        
    }
    
    printf("%d %d\n", min, max);

//      sol1) 아래와 같이 벡터에 넣고 정렬하면 된다.
//    int n;
//    
//    scanf("%d", &n);
//    
//    vector<int> v;
//    
//    int temp;
//    
//    
//    for (int i=0; i<n; i++) {
//        
//        scanf("%d", &temp);
//        
//        v.push_back(temp);
//        
//    }
//    
//    sort(v.begin(), v.end());
//    
//    printf("%d %d\n", v[0], v[n-1]);
    
    return 0;
}
