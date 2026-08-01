class Solution {
    public void swap(char[] s, int a, int b){
        char temp=s[a];
        s[a]=s[b];
        s[b]=temp;
    }
    public void reverseString(char[] s) {
        int st=0;
        int end=s.length-1;

        while(st<end){
            swap(s,st,end);
            st++;
            end--;
        }
    }
}