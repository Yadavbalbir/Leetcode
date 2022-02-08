class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m1,m2;
        for(auto it:s1)
            m1[it]++;
        int i=0,j=0;
        while(j<s2.size())
        {
            m2[s2[j]]++;
            if(j-i+1<s1.size())
                j++;
            else if(j-i+1==s1.size())
            {
                if(m1==m2)
                    return true;
                m2[s2[i]]--;
                if(m2[s2[i]]==0)
                    m2.erase(s2[i]);
                i++;j++;
            }
        }
        return false;
    }
};