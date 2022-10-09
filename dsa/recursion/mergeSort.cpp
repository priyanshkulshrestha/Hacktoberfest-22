#include<iostream>
using namespace std;

void merge(int arr[],int e,int s){

    int mid = (s+e)/2;

    // find length of 2 arr 
    int len1 = mid - s+1;
    int len2 = e - mid;

    // create arr of there length
    int first[len1];
    int second[len2];

    // copying both array 
    int mainArrayIndex = 0;
    for(int i=0;i<len1;i++){
        first[i++] = arr[mainArrayIndex++];
    }
    for(int i =0;i<len2;i++){
        second[i++] = arr[mainArrayIndex++];
    }

    // merge 2 sorted array
    int fIndex = 0,sIndex = 0, mainIndex = 0;
    while(fIndex<len1 && sIndex<len2){
        if(first[fIndex] < second[sIndex])
            arr[mainIndex++] = first[fIndex++];
        else
            arr[mainIndex++] = second[sIndex++];
    }
    while (fIndex<len1)
    {
        arr[mainIndex++] = first[fIndex++];
    }
    
    while (sIndex<len1)
    {
        arr[mainIndex++] = second[sIndex++];
    }

    
}

void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" number for array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);

    return 0;
}