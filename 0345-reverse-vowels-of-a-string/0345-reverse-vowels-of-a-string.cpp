class Solution {
public:
    string reverseVowels(string s) {
        int n= s.length();
        int left=0;
        int right=n-1;
        string vowels= "aeiouAEIOU";
        while(left<=right){
            if (vowels.find(s[left]) != string::npos  && vowels.find(s[right]) != string::npos){
                char c= s[left];
                s[left]=s[right];
                s[right]=c;
                left++;
                right--;
            }
            else if(vowels.find(s[left]) == string::npos && vowels.find(s[right]) != string::npos){
                left++;
            }
            else if(vowels.find(s[left]) != string::npos && vowels.find(s[right]) == string::npos){
                right--;
            }
            else {
                left++;
                right--;
            }
        }
        return s;
    }
};