class Solution {
public:
    bool isPalindrome(string s, int i=0) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            // Compare after converting to lowercase
            if (tolower(s[left]) != tolower(s[right])) return false;

            left++;
            right--;
        }
        return true;

        // rcrsn function use krke 
        // if(i>=s.size()/2) return true;
        // if (s[i]!=s[s.size()-i-1]) return false;
        // return isPalindrome(s, i+1);
    }
};