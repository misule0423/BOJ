//
//  main.cpp
//  1912
//
//  Created by 이민석 on 2016. 8. 29..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {

    
//    방법1: 시간 초과
//    int n;
//    
//    cin >> n;
//    
//    vector<int> vc;
//    
//    for (int i=0; i<n; i++) {
//        int k;
//        
//        cin >> k;
//        
//        vc.push_back(k);
//    }
//    
//    int kk=0;
//    int max=vc[0];
//    int status = 0;
//    
//    while(kk!=n){
//        
//        vector<int> v(n, -1);
//        
//        for (int i=kk; i<n; i++) {
//            for (int j=kk; j<=i; j++) {
//            
//                status += vc[j];
//            }
//            
//            if(max < status)
//                max = status;
//            status = 0;
//        }
//        
//        kk++;
//
//    }
//    
//    cout << max << endl;;
    
    
//  방법2: 시간 초과
//    int n;
//    
//    cin >> n;
//    
//    vector<int> vc;
//    
//    for (int i=0; i<n; i++) {
//        int k;
//        
//        cin >> k;
//        
//        vc.push_back(k);
//    }
//    int kk=0;
//    int max=0;
//    
//    while(kk!=n){
//        
//        vector<int> v(kk);
//        
//        v.push_back(vc[kk]);
//        
//        for (int i=kk+1; i<n; i++) {
//            v.push_back(vc[i] + v[i-1]);
//            
//            if(v.back() >= v[i-1])
//                max = v.back();
//            
//        }
//    
//        sort(v.begin(), v.end());
//        
//        if(v.back() > max)
//            max = v.back();
//        
//        kk++;
//    }
//    
//    cout << max;
    
//    누적된 값이 0보다 크면 계속해서 누적해나가고 누적된 값이 0보다 작으면 그 값을 그대로 넣는다
//    http://wootool.tistory.com/100 사이트 참고 했다.
    
    int n;
    int number[100001] = { };
    int dp[100001] = { };
    int max;
    
    cin >> n;
    
    for (int i=1; i<=n; i++) {
        cin >> number[i];
    }
    
    for (int i=1; i<=n; i++) {
        if(dp[i-1] > 0)
            dp[i] = dp[i-1] + number[i];
        else
            dp[i] = number[i];
    }
    
    max = dp[1];
    
    for (int i=2; i<=n; i++) {
        if(max < dp[i])
            max = dp[i];
    }
    
    cout << max << endl;
    
    
    
    return 0;
}
