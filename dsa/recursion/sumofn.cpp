#include<iostream>
using namespace std;

int solve(int n){
    if(n==0){
        return 0;
    }
    return n + solve(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}