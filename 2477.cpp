//
//  main.cpp
//  2477
//
//  Created by 이민석 on 2016. 9. 1..
//  Copyright © 2016년 Roop. All rights reserved.
//
//  http://dyndy.tistory.com/130 사이트 참조함

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int k;
    
    cin >> k;
    
    int dir[6], len[6];
    int widthMax=0, heightMax=0;
    
    
    for (int i=0; i<6; i++) {
        
        cin >> dir[i] >> len[i];
        
        if(dir[i] == 1 | dir[i] == 2) {
            if(len[i] > widthMax)
                widthMax = len[i];
        } else {
            if(len[i] > heightMax)
                heightMax = len[i];
        }
        
    }
    
    int area = 0;
    
    for (int i=0; i<6; i++) {
        area += len[i] * len[(i+1)%6];
    }
    
    cout << k * (area - 2 * widthMax * heightMax) << endl;
    
    
    return 0;
}
