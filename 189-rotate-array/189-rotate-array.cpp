class Solution {
public:
    void rotate(vector<int>& v, int k) {
        if(v.size()==1){
            return;
        }
        if(k>v.size()){
            k=k%v.size();
        }
        std::rotate(v.begin(),v.begin()+v.size()-k,v.end());
    }
};