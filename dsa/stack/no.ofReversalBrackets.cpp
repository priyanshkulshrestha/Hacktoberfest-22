// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    int x=0,y=0;
    if(s.length()%2 == 1)
    return -1;
    else{
        stack<int> a;
        int i =0;
        while(s[i] != '\0'){
            if(a.empty())
            a.push(s[i]);
            
            else if(s[i] == '}' && a.top() == '{')
            a.pop();
            
            else
            a.push(s[i]);
            i++;
        }
        
        while(!a.empty()){
            if(a.top() == '{')
            x++;
            if(a.top() == '}')
            y++;
            a.pop();
        }
    }
    return ((x+1)/2 + (y+1)/2);
}