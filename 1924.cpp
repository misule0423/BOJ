//
//  main.cpp
//  BOJ_1924
//
//  Created by 이민석 on 2017. 5. 7..
//  Copyright © 2017년 이민석. All rights reserved.
//

#include <iostream>
#include <cstdio>

int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
char date[7][5] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main(int argc, const char * argv[]) {
    
    int x, y;
    
    scanf("%d %d", &x, &y);

    int day = 0;
    
    for (int i=1; i<x; i++) {
        
        day += month[i-1];
        
    }
    
    day += y;
    
    printf("%s\n", date[(day-1) % 7]);
    
    return 0;
}
