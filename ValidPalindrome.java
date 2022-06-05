/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

*/

class Solution {
    public boolean isPalindrome(String s) {
        String rev="";
        String str = "";
        s = s.toLowerCase();
		for(int i=0;i<s.length();i++) {
            if(s.charAt(i)>=97 && s.charAt(i)<=122){
			    str = str+s.charAt(i);
            }
		}
        for(int i=str.length()-1;i>=0;i--) {
            rev=rev+str.charAt(i);
		}
		if(str.equals(rev)){
		    return true;
		}
		return false;
    }
}