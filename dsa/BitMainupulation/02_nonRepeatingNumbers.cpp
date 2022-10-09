// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xxory =0;
        for (auto& it : nums){
            xxory ^= it;
        }
        
        int rsbm = xxory & -xxory;
        int x=0,y=0;
        for (auto& it : nums){
            if((it & rsbm)==0)
                x ^= it;
            else
                y ^= it;
        }
        
        
        vector<int> result;
        result.push_back(x);
        result.push_back(y);
        sort(result.begin(), result.end());

        return result;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends