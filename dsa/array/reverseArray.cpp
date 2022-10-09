#include <iostream>
using namespace std;

int main() {
	//code
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i =0;i<n;i++){
	        cin>>a[i];
	    }
	    int s = 0;
	    int e = n-1;
        // cout<<e<<endl<<s;
	    while(s<=e){
	        int temp = a[s];
	        a[s] = a[e];
	        a[e] = temp;
            s++;
            e--;
	    }
        
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	}
	return 0;
}