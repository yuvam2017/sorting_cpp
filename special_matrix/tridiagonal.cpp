#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // user input
    int n;
    cin>>n;
    int numberOfElements = (3 * n) - 2;
    int input[numberOfElements];
    for(int i=0; i<numberOfElements; i++)
    {
        int num;
        cin>>num;
        input[i] = num;
    }
    
    
    int matrix[n][n];
    int ctr = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(abs(i-j) == 1 || i == j)
            {
                matrix[i][j] = input[ctr++];
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
    
    // displaying matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
