//
//  main.cpp
//  BOJ_10952
//
//  Created by 이민석 on 2017. 5. 5..
//  Copyright © 2017년 이민석. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a, b;

//    !(a==b==0)는 안되는 것일까? 안된다! 왜냐하면 a==b에서 true가 먼저 계산되고, true == 0 이면 false로 계산되기 때문이다.
    while ( scanf("%d %d", &a, &b) == 2 && !(a==0 && b==0) ) {
        
        printf("%d\n", a+b);
        
    }
    
    return 0;
}
