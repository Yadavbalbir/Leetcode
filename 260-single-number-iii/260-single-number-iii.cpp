class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int Xor =0;
        for(auto v: nums){
            Xor = Xor^v;
        }
        
        int i=0;
        while(1){
            if((Xor>>i)&1){
                break;
            }
            i++;
        }
        cout<<Xor<<" "<<i<<endl;
        int xor1=0, xor0=0;
        
        for(auto v: nums){
            if((v>>i) & 1){
                xor1 = xor1^v;
            }
            else{
                xor0 = xor0^v;
            }
        }
        
        return {xor0, xor1};
    }
};