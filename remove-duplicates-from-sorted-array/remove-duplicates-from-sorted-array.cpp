class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int s = nums.size();
        if(s==0)
            return 0;
        else{
            int p = 1;
            for(int i = 1; i < s; i++){
                if(nums[p-1]!=nums[i]){
                    nums[p] = nums[i];
                    p++;
             }
            }
            return p;
        } 
    }
};