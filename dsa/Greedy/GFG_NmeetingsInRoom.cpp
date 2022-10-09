//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    static bool cmp(pair<int,int> a, pair<int, int> b){
        return a.second < b.second;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> meets;
        
        for(int i =0;i<n;i++){
            meets.push_back(make_pair(start[i], end[i]));
        }
        
        sort(meets.begin(), meets.end(), cmp);
        
        int startTime=-1, endTime=-1, ans = 0;
        
        for(int i=0;i<n;i++){
            startTime  = meets[i].first;
            if(startTime>endTime){
                ans++;
                endTime = meets[i].second;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends