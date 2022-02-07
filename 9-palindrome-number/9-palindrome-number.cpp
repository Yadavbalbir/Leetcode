class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int> num;
        while(x!=0){
            num.push_back(x%10);
            x/=10;
        }
        vector<int> num1(num);
      
        int s=0;
        int e=num.size()-1;
        while(s<e){
            swap(num[s++],num[e--]);
        }
        
        for(int i=0;i<num.size();i++){
            if(num[i]!=num1[i]) return false;
        }
        return true;
    }
};