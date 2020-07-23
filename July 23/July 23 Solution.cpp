class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> result;
        map<int,int> hash;
        
        for(int i: nums)
            hash[i]++;
            
        for(int i: nums)
            if(hash[i]==1)
                result.push_back(i);

        
        return result;
    
        
    }
};
