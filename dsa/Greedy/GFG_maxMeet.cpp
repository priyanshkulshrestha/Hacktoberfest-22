//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    static bool cmp(pair<int, pair<int,int>> a, pair<int, pair<int, int>> b){
        // return a.second.second < b.second.second;
        if(a.second.second == b.second.second){
            return a.first < b.first;
        }
        return a.second.second < b.second.second;
    }
    
    vector<int> maxMeetings(int n,vector<int> &S,vector<int> &F){
        vector<pair<int, pair<int,int>>> meets;
        vector<int> ans;
        
        for(int i =0;i<n;i++){
            meets.push_back(make_pair(i+1 ,make_pair(S[i], F[i])));
        }
        
        sort(meets.begin(), meets.end(), cmp);
        
        int startTime=-1, endTime=-1;
        
        for(int i=0;i<n;i++){
            startTime  = meets[i].second.first;
            if(startTime>endTime){
                ans.push_back(meets[i].first);
                endTime = meets[i].second.second;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends