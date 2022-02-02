class Solution {
public:
    bool isPowerOfThree(int n) {
        bool power=false;
        int i=0;
        while(pow(3,i)<INT_MAX){
            if(n==pow(3,i)){
                power=true;
                break;
            }
            i++;
        }
        return power;
    }
};