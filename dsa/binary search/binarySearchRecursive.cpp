#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int key){
    // cout<<"checking\n";
    if(s>=e)
    return -1;
    int mid = s + (e-s)/2;
    if(arr[mid] == key)
    return mid;
    else if (arr[mid] < key)
    binarySearch(arr,mid+1,e,key);
    else 
    binarySearch(arr,s,mid-1,key);
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<binarySearch(arr,0,10,11);
    return 0;
}