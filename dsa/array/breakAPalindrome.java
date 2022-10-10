class Solution {
    public String breakPalindrome(String palindrome) {
       if(palindrome.length()==1)
           return "";
       int left=0;
       char[] arr=palindrome.toCharArray();
       int right=palindrome.length()-1;
       while(left<right){
           if(palindrome.charAt(left)-'a'>0){
               arr[left]='a';
               return new String(arr);
           }
           left++; right--;
       }
       arr[palindrome.length()-1]++;
       return new String(arr);
   }
}