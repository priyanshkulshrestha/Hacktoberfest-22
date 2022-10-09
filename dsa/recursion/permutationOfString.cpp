// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    private:
    void solve(string s, int index, vector<string>& ans){
        // cout<<s;
        if(index>=s.length()){
            ans.push_back(s);
            return;
        }
        // cout<<index;
        for(int i=index;i<s.length();i++){
            swap(s[i],s[index]);
            solve(s, index+1, ans);
            swap(s[i],s[index]);
        }
    }
    
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    int index=0;
		    solve(S,index,ans);
		    sort(ans.begin(),ans.end());
		    ans.erase(std::unique(ans.begin(), ans.end()), ans.end());

		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends