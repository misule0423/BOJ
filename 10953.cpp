//
//  main.cpp
//  BOJ_10953
//
//  Created by 이민석 on 2017. 5. 5..
//  Copyright © 2017년 이민석. All rights reserved.
//

#include <iostream>
#include <cstdio>

int main(int argc, const char * argv[]) {
    
    int t;
    
    scanf("%d", &t);
    
    int a, b;
    char comma;
    
    
    while (t--) {
        
//        아래와 같이 입력받을 때 하나의 문자를 추가로 입력받는 것이 아니라 , 를 넣어주면 된다.
//        scanf("%d,%d", &a, &b);
        
        scanf("%d%c%d", &a, &comma, &b);
        
        printf("%d\n", a+b);
        
    }
    
    return 0;
}
