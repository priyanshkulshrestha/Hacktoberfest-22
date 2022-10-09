#include<iostream>
using namespace std;

void solve(int a[], int s, int l){
    if(s>=l)
    return;
    int k = a[s];
    a[s] = a[l];
    a[l] = k;
    l--;s++;
    solve(a, s , l);
}

void display(int a[]){
    for(int i =0;i<10;i++){
        cout<<a[i]<<"\t";
    }cout<<endl;
}

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    display(a);
    solve(a, 0, 9);
    display(a);

    return 0;
}