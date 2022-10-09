// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    
		    const int len = s.size();
		    const int count = (1<<len);
		    
		    vector<string> subsets;
		    for(int i =1;i<count;i++){
		        string subset;
		        for(int j = 0;j<len;j++){
		            if(i & (1<<j)){
		                subset.push_back(s[j]);
		            }
		        }
		        subsets.push_back(subset);
		    }
		   sort(subsets.begin(),subsets.end());
		   return subsets;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends