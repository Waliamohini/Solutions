class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3 = "";
        int a = 0, b = 0;

        while(a < word1.length() || b < word2.length()){
            if(a < word1.length()){
                word3 += word1[a];
                a++;
            }

            if(b < word2.length()){
                word3 += word2[b];
                b++;
                
            }
        }
        return word3;
        }};