#include<iostream>
using namespace std;

void reverseCount(int n){
    if(n>0){
        reverseCount(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    reverseCount(n); 
    return 0;
}