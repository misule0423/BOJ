//
//  main.cpp
//  4673
//
//  Created by 이민석 on 2016. 9. 2..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int d(int n){
    
    int res = n;
    
    for (int i=n; i>0; i/=10) {
        res += (i%10);
    }
    
    return res;
}

int main(int argc, const char * argv[]){
    
    int res[10001] = {0};
    
    for (int i=1; i<=10001; i++) {
        
        int tmp = d(i);
        
        if(tmp < 10000)
            res[tmp] = 1;
    }
    
    for (int i=1; i<10000; i++) {
        if(res[i] == 0)
            cout << i << endl;
    }
    
    return 0;
}


//
//int main(int argc, const char * argv[]) {
//
//    int mat[10001];
//    
//    for (int i=0; i<10001; i++) {
//        mat[i] = 0;
//    }
//    
//    for (int i=1; i<10001; i++) {
//        
//        if(mat[i]==0){
//            for (int j=1; j<10001; j++) {
//                if(j>=0 && j<100 ){
//                    
//                    int k = j + (j/10) + (j%10);
//                    if(k<10001)
//                        mat[k] = 1;
//                }
//                else if(j>=100 && j<1000){
//                    int k = j + (j/100) + (j%100/10)+(j%10);
//                    if(k<10001)
//                        mat[k] = 1;
//                }
//                else if(j>=1000 && j<10000){
//                    int k = j + (j/1000) + (j%1000/100)+(j%1000%100/10)+(j%10);
//                    if(k<10001)
//                        mat[k] = 1;
//                }
//            }
//        }
//    }
//
//    for (int i=1; i<10001; i++) {
//        if(mat[i] == 0)
//            cout << i << endl;
//    }
//    
//    return 0;
//}
