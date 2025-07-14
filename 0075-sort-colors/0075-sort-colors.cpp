class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        // bubble sort 
        // bool isSwap = false ;
        // for (int i = 0; i < n - 1; i++) {
        //     for (int j = 0; j < n - i - 1; j++) {
        //         if (nums[j] > nums[j + 1]) {
        //             swap(nums[j], nums[j + 1]);
        //             isSwap= true;
        //         }
        //     }
        //     if(!isSwap){
        //         return ;
        //     }
        // }

        // selection sort 
        // for(int i= 0; i<n-1; i++ ){
        //     int smallInd = i;
        //     for(int j = i+1; j<n; j++){
        //         if(nums[smallInd]>nums[j]){
        //             smallInd= j;
        //         }
        //     }
        //     swap(nums[i], nums[smallInd]);
        // }

        // insertion sort
        for(int i =1; i<n; i++){
            int curr = nums[i], prev= i-1;
            while(prev>=0 && nums[prev]>curr){
                nums[prev+1] = nums[prev];
                prev--;
            }
            nums[prev+1]= curr;
        }
    }
};