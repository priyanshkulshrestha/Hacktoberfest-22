#include<iostream>
#include<string.h>

using namespace std;

void reverseStr(string& str, int s, int e){
    // cout<<"s = "<<s<<" e= "<<e;
    if(s>=e)
    return ;
    swap(str[s],str[e]);
    reverseStr(str, s+1, e-1);
}

int main()
{
    string s = "HELLO PRIYANSH";
    reverseStr(s, 0, s.length()-1);
    cout<<s;
    return 0;
}