class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int left = 0;
        int right = s.length()-1;

        while(left < right){
            if(vowels.find(s[left]) != string::npos && vowels.find(s[right]) != string::npos){
                swap(s[left], s[right]);
                right--;
                left++;

            }
            else if(vowels.find(s[left]) != string::npos){
                right--;
            }
            else if(vowels.find(s[right]) != string::npos){
                left++;
            }
            else{
                left++;
                right--;
            }
        }
        return s;
    }
};