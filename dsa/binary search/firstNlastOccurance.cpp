#include<bits/stdc++.h>

using namespace std;

int firstocc(vector<int>& arr,int n,int k){
    int m = n;
    int s = 0, e = n-1;
    int mid = s + ((e-s)/2);
    int ans;
    while(s<=n){
        if(arr[mid] == k){
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid]>k){
            e = mid -1;
        }
        else if(arr[mid]<k)
            s = mid + 1;
//     	mid = s + ((e-s)/2);
    	mid = (s + e)/2;
        
    }
    return ans;
}
int lastocc(vector<int>& arr,int n,int k){
    int m = n;
    int s = 0, e = n-1;
    int mid = s + ((e-s)/2);
    int ans;
    while(s<=n){
        if(arr[mid] == k){
            ans = mid;
            s = mid +1;
        }
        else if(arr[mid]>k){
            e = mid -1;
        }
        else if(arr[mid]<k)
            s = mid + 1;
    	mid = (s + e)/2;
        
    }
    return ans;
}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair <int, int> p;
    p.first = firstocc(arr,n,k);
    p.second = lastocc(arr,n,k);
    
    return p;
}

int main(){
    vector <int> a {1,2,3,3,3,3,3,3,4,4};

    // for (int x : a)
    //     cout << x << " ";
    cout<<firstAndLastPosition(a, 10, 3);

    return 0;

}
