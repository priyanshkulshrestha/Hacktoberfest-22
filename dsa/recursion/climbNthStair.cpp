// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Fibbonaci in diffrent method 

#include<iostream>
using namespace std;
int climbStairs(int n) {
//Recursive

    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    return climbStairs(n-1) + climbStairs(n-2);

// Dp
int res[n + 1];
        res[0] = 1;
        res[1] = 1;
        
        for (int i = 2; i <= n; i++)
            res[i] = res[i - 1] + res[i - 2];
 
        return res[n];

}

int main()
{
    int n;
    cin>>n;
    cout<<climbStairs(n);
    return 0;
}