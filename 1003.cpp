//
//  main.cpp
//  1003
//
//  Created by 이민석 on 2016. 9. 26..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int fibo[41];
int fibo_zero[41];
int fibo_one[41];

int main(int argc, const char * argv[]) {

    int tc;
    
    cin >> tc;
    
    fibo[0] = 1;
    fibo[1] = 1;
    
    fibo_zero[0] = 1;
    fibo_zero[1] = 0;
    fibo_one[0] = 0;
    fibo_one[1] = 1;
    
    while(tc--){
    
        int N;
        
        cin >> N;
        
        for (int i=2; i<=N; i++) {
            fibo[i] = fibo[i-1] + fibo[i-2];
            fibo_zero[i] = fibo_zero[i-1] + fibo_zero[i-2];
            fibo_one[i] = fibo_one[i-1] + fibo_one[i-2];
        }
        
        cout << fibo_zero[N] << " " << fibo_one[N] << endl;
        
    }
    
    
    return 0;
}


// //
// //  main.cpp
// //  1003
// //
// //  Created by 이민석 on 2016. 9. 1..
// //  Copyright © 2016년 Roop. All rights reserved.
// //

// #include <iostream>
// using namespace std;

// int z=0, o=0;

// int fibonacci(int n) {
//     if (n==0) {
//         z++;
//         return 0;
//     } else if (n==1) {
//         o++;
//         return 1;
//     } else {
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }

// int main(int argc, const char * argv[]) {
    
//     int t;
    
//     cin >> t;
    
//     while (t--) {
        
//         int n;
        
//         cin >> n;
        
//         fibonacci(n);
        
//         cout << z << " " << o << endl;
        
//         z=o=0;
//     }
    
//     return 0;
// }
