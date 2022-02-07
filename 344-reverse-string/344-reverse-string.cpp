class Solution {
public:
    void reverseString(vector<char>& s) {
        int e=s.size()-1;
        int start=0;
        while(start<e){
            swap(s[start++],s[e--]);
        }
    }
};