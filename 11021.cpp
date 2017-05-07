//
//  main.cpp
//  BOJ_11021
//
//  Created by 이민석 on 2017. 5. 7..
//  Copyright © 2017년 이민석. All rights reserved.
//

#include <iostream>
#include <cstdio>

int main(int argc, const char * argv[]) {
   
    int t1;
    
    scanf("%d", &t1);
    
    int t2 = t1;
    
    int a, b;
    
    while (t1--) {
        
        scanf("%d %d", &a, &b);
        
        printf("Case #%d: %d\n", t2-t1, a+b);
        
    }
    
    return 0;
}
