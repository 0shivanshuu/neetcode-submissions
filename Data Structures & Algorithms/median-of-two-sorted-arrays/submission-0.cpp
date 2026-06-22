class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    
        vector<int> ans;
        for(int i: nums1){
            ans.push_back(i);
        }
        for(int i: nums2){
            ans.push_back(i);
        }
        sort(ans.begin(), ans.end());
        int n= ans.size();

        for(int i=0; i<ans.size(); i++){
            if(n%2!=0){
                return ans[n/2];

            }
            else{
            double fans=(ans[n/2]+ans[n/2 -1]);
                return (fans/2);
            }
            


        }
       
        

    }
};
