class Solution {
public:
    int addDigits(int num) {
        unsigned int sum=num%10;
        while(num/10>0){  
            sum=0;
            while(num!=0){
                sum=sum+(num%10);
                num=num/10;
                cout<<"sum:"<<sum<<" num:"<<num<<endl;
            }
            num=sum;
        }
        return sum;
    }
};