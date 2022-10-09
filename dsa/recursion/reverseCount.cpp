#include<iostream>
using namespace std;

void reverseCount(int n){
    if(n>0){
        cout<<n<<" ";
        reverseCount(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    reverseCount(n); 
    return 0;
}