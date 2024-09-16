class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        //int i, complement=0;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]=i; //mapping element to index
        }
        for(int i=0;i<nums.size();i++)
        {
            int complement= target-nums[i];
            if(hash.find(complement)!=hash.end() && hash[complement] !=i)
            {
                return {i,hash[complement]};
            }

        }
        return {};
        
    }
};