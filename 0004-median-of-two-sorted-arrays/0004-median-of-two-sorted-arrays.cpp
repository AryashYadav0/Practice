class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array for efficiency
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int totalLeft = (m + n + 1) / 2; // Number of elements in left partition
        
        int left = 0, right = m;
        
        while (left <= right) {
            int cut1 = (left + right) / 2; // Partition point in nums1
            int cut2 = totalLeft - cut1;   // Partition point in nums2
            
            // Elements just before and after the cut
            int left1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int left2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
            int right1 = (cut1 == m) ? INT_MAX : nums1[cut1];
            int right2 = (cut2 == n) ? INT_MAX : nums2[cut2];
            
            // Check if we found the correct partition
            if (left1 <= right2 && left2 <= right1) {
                // Perfect partition found
                if ((m + n) % 2 == 1) {
                    // Odd total length: return max of left partition
                    return max(left1, left2);
                } else {
                    // Even total length: return average of middle two elements
                    return (max(left1, left2) + min(right1, right2)) / 2.0;
                }
            }
            else if (left1 > right2) {
                // nums1's partition is too far right, move left
                right = cut1 - 1;
            }
            else {
                // nums1's partition is too far left, move right
                left = cut1 + 1;
            }
        }
        
        return 0.0; // This should never be reached
    }
};
