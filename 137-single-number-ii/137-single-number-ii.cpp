class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones =0;
        int twos = 0;
        int three = -1;
        
        for(int i=0;i<nums.size();i++){
            int cones = ones & nums[i];
            int ctwo = twos & nums[i];
            int cthree = three & nums[i];
            ones|=cthree;
            three&=~cthree;
            
            twos|=cones;
            ones&=~cones;
            
            three|=ctwo;
            twos&=~ctwo;
        }
        
        return ones;
    }
};