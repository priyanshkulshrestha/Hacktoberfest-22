#include<iostream>
using namespace std;
int i =1;

void f(int n, int i){
    // cout<< n<< "\t"<< i <<endl;
    if(i>n) return; 
    i++;
    f(n,i);
    cout << i << "\n";   
}

int main()
{
    int n;
    cin>>n;
    f(n,i);
    return 0;
}