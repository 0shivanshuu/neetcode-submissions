class Solution {
public:
    bool isPalindrome(string s) {

        string str;

        for(char ch: s){
            if(isalnum(ch)){
                str.push_back(tolower(ch));
            }
        }

        int i=0;

        int j=str.length()-1;

        while(i<j){
            if(str[i]==str[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }





      return true;
        
    }
};
