class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>index;
        
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i+1;j<nums.size();j++){
                sum=nums[j]+nums[i];
                if(sum==target){
                    index.push_back(i);
                    index.push_back(j);
                     break;
                }
                
            }
        }
       return index;
    }
};
