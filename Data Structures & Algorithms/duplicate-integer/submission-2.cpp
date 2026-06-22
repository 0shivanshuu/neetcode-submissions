class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map <int,int> dq;

        for(int i: nums){
            dq[i]++;

            if(dq[i]>1){
                return true;
            }
        }

        return false;

        
    }
};