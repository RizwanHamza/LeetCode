class Solution {
public:
    string reverseWords(string s) {
        int l = s.length();
        string st;
        int pos=0,j;
        for(int i = 0; i < l; i++){
            if(s[i]==' ' || i==l-1){
                if(i==l-1)
                    j=i;
                else
                    j=i-1;
                for(; j >= pos; j--)
                    st.push_back(s[j]);
                pos = i+1;
                if(s[i]==' ')
                    st.push_back(' ');
            }
        }
        return st;
    }
};