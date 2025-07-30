class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex; // Maps character to its latest index
        int maxLen = 0;
        int left = 0; // Left pointer of sliding window
        
        for (int right = 0; right < s.length(); right++) {
            char c = s[right];
            
            // If character is seen and is within current window
            if (charIndex.find(c) != charIndex.end() && charIndex[c] >= left) {
                left = charIndex[c] + 1; // Move left pointer past the duplicate
            }
            
            charIndex[c] = right; // Update character's latest position
            maxLen = max(maxLen, right - left + 1); // Update max length
        }
        
        return maxLen;
    }
};