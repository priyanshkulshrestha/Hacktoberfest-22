//{ Driver Code Starts
    import java.io.*;
    import java.util.*;
    class GFG
    {
        public static void main(String args[])throws IOException
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            
            while(t-- > 0)
            {
                int r = sc.nextInt();
                int c = sc.nextInt();
                
                int matrix[][] = new int[r][c];
                
                for(int i = 0; i < r; i++)
                {
                    for(int j = 0; j < c; j++)
                     matrix[i][j] = sc.nextInt();
                }
                Solution ob = new Solution();
                ArrayList<Integer> ans = ob.spirallyTraverse(matrix, r, c);
                for (Integer val: ans) 
                    System.out.print(val+" "); 
                System.out.println();
            }
        }
    }
    // } Driver Code Ends
    
    
    class Solution
    {
        //Function to return a list of integers denoting spiral traversal of matrix.
        static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
        {
            // code here 
            ArrayList<Integer> list = new ArrayList<Integer>();
            int i,k=0,l=0;
            
            while(k<r &&l<c)
            {
                for(i=l;i<c;++i){
                    list.add(matrix[k][i]);
                }
                k++;
                
                for(i=k;i<r;++i){
                    list.add(matrix[i][c-1]);
                }
                c--;
                
                if(k<r){
                    for(i=c-1;i>=l;--i){
                        list.add(matrix[r-1][i]);
                    }
                    r--;
                }
                
                if(l<c){
                    for(i=r-1;i>=k;--i){
                        list.add(matrix[i][l]);
                    }
                }
                l++;
                }
                return list;
        }
    }
    