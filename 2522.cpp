//
//  main.cpp
//  2522
//
//  Created by 이민석 on 2017. 5. 7..
//  Copyright © 2017년 이민석. All rights reserved.
//

#include <iostream>
#include <cstdio>

int main(int argc, const char * argv[]) {
    
    int n;
    
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        
        for (int j=n; j>i; j--) {
            printf(" ");
        }
        
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        
        printf("\n");
        
    }
 
    for (int i=1; i<n; i++) {
        
        for (int j=1; j<=i; j++) {
            printf(" ");
        }
        
        for (int j=n; j>i; j--) {
            printf("*");
        }
        
        printf("\n");
        
    }
    
    return 0;
}
