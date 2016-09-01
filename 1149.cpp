//
//  main.cpp
//  1149
//
//  Created by 이민석 on 2016. 9. 1..
//  Copyright © 2016년 Roop. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int house[1000][3];
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> house[i][j];
        }
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if (house[i][1] > house[i][2])
        {
            house[i + 1][0] += house[i][2];
        }
        else
        {
            house[i + 1][0] += house[i][1];
        }
        if (house[i][0] > house[i][2])
        {
            house[i + 1][1] += house[i][2];
        }
        else
        {
            house[i + 1][1] += house[i][0];
        }
        if (house[i][0] > house[i][1])
        {
            house[i + 1][2] += house[i][1];
        }
        else
        {
            house[i + 1][2] += house[i][0];
        }
    }
    
    int min = house[n-1][0];
    
    for (int i = 0; i < 3; i++)
    {
        if (house[n - 1][i] < min)
            min = house[n - 1][i];
    }
    
    cout << min;
    
    return 0;
}