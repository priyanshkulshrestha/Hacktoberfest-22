// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Complete the function
int solve (int n, int count){
    if(n<count)
    return 1;
    if(n==count || n%count==0)
    return 0;
    n= n-(n/count);
    solve(n, count+1);
    
    
}
// n: Input n
// Return true if the given number is a lucky number else return False

bool isLucky(int n) {
    // code here
    return solve(n,2);
}

// { Driver Code Starts.

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        //calling isLucky() function
        if(isLucky(n))
            printf("1\n");//printing "1" if isLucky() returns true
        else
            printf("0\n");//printing "0" if isLucky() returns false
    }
    
}  // } Driver Code Ends