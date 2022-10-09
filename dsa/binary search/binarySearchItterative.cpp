#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s =0, e = n;
    int mid = s + (e-s)/2;
    while(s<=e){
        // cout<<"checking";
        if(arr[mid] == key)
        return mid;
        else if (arr[mid] < key)
        s = mid+1;
        else
        e = mid-1;
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<binarySearch(arr,10,4);
    return 0;
}