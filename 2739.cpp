//
//  main.cpp
//  BOJ_2739
//
//  Created by 이민석 on 2017. 5. 7..
//  Copyright © 2017년 이민석. All rights reserved.
//

#include <iostream>
#include <cstdio>

int main(int argc, const char * argv[]) {
    
    int n;
    
    scanf("%d", &n);
    
    for (int i=1; i<=9; i++) {
        
        printf("%d * %d = %d\n", n, i, n*i);
        
    }
    
    return 0;
}
