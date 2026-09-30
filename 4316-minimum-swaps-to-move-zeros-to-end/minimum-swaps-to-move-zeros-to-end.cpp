class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zeroes=0;

        for(int x: nums){
            if(x==0)
            zeroes++;
        }
        int swaps=0;

        for(int i=0;i<nums.size()-zeroes;i++){
            if(nums[i]==0)
            swaps++;
        }
        return swaps;
        
    }
};