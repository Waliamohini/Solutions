class Solution {
public:
    string reverseWords(string s) {
        string word;
        istringstream iss(s);
        vector<string> words;

        while(iss >> word){
            words.push_back(word);
        }

        string reversed = "";

        for(int i = words.size() - 1; i > -1; i--){
            reversed += words[i];
            if(i > 0){
                reversed += " ";
            }
        }
        return reversed;

        }
        
    
};