//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans;
        stack<char> s;
        for(int i=S.length()-1;i>=0;i--){
            if(S[i] == '.' || i==0){
                if(i==0)
                    ans += S[i];
                    
                while(!s.empty()){
                    char ele = s.top();
                    s.pop();
                    ans += ele;
                }
                
                if(S[i] == '.')
                    ans += '.';
                
            }
            else{
                s.push(S[i]);
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends