//
//  main.cpp
//  1152
//
//  Created by 이민석 on 2016. 9. 3..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {

    char str[1000000];
    
    cin.getline(str, 1000000);

    int cnt=0;
    int flag=0;
    
    for (int i=0; i<strlen(str); i++) {
        if( flag==0 && ((int)str[i] >= 97 && (int)str[i] <=122) || ((int)str[i]>=65 && (int)str[i]<=90))
            flag = 1;
        
        if( flag==1 && (str[i+1] =='\0' || str[i+1] == ' ')){
            cnt++;
            flag=0;
        }
            
    }
    
    cout << cnt << endl;
    
    return 0;
}
