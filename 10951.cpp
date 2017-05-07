//
//  main.cpp
//  BOJ_10951
//
//  Created by 이민석 on 2017. 5. 5..
//  Copyright © 2017년 이민석. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a, b;

//    scanf의 리턴값은 성공적으로 입력받은 변수의 개수이다.
//    그래서 3 a 를 입력하면 1을 리턴하므로 while문은 종료되게 된다.
//    추가적으로 3.5와 같이 실수를 입력하면 1을 출력한다. 왜냐하면 . 을 문자로 입력받기 때문이다.
//    만약 입력 문자가 2개가 아니라 1개라면 마찬가지로 1을 출력한다. 왜냐하면 소수부분은 버려지고 정수만 제대로 입력받기 때문이다.
    
//    int a, b;
//    printf("%d\n", scanf("%d", &a));    
    
//    그리고 EOF(End Of File)을 입력하면 while문은 종료하게 된다.
//    EOF는 문자로서 입력을 해도 되지만, 맥에서는 컨트롤 D, 윈도우에서는 컨트롤 Z를 의미한다.
    
    while ( scanf("%d %d", &a, &b) == 2 ) {
        
        printf("%d\n", a+b);
        
    }
    
    return 0;
}
