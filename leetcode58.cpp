class Solution {
public:
    int lengthOfLastWord(string s) {
        int t_size = 0;
        bool first_char =false;
        for(int i= s.size()-1;i>=0;i--){
            if(s[i] != ' '){
                first_char =true;
                t_size++;
            }
            if(s[i] == ' ' && first_char)
                break;
        }
        
        return t_size;
    }
};
