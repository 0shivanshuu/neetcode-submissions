class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map <int,int> dq;

        for(int i=0; i<nums.size(); i++){
            dq[nums[i]]++;

            if(dq[nums[i]]>1){
                return true;
            }


        }

        return false;

        
    }
};