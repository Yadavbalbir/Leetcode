class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=pow(10,6);
        int Omax=0;
        int Tmax=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            Tmax=prices[i]-mini;
            if(Tmax>Omax){
                Omax=Tmax;
            }
        }
        return Omax;
    }
};