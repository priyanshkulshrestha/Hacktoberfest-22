// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool valid(string s)
{
    // code here
    stack<char> st;
    for(int i =0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else{
            if(st.empty())
            return 0;
            else{
                char top = st.top();
                if((top == '(' && s[i] == ')') ||
                    (top == '{' && s[i] == '}') || 
                    (top == '[' && s[i] == ']'))
                st.pop();
                else
                return 0;
            }
        }
    }
    if(st.empty())
    return 1;
    else
    return 0;
    
}