class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxLen = 0;

        for (int num : s) {
            // Check if num is the start of a sequence
            if (!s.count(num - 1)) {
                int currentNum = num;
                int currentStreak = 1;

                while (s.count(currentNum + 1)) {
                    currentNum++;
                    currentStreak++;
                }

                maxLen = max(maxLen, currentStreak);
            }
        }

        return maxLen;
    }
};