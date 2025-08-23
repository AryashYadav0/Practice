class Solution {
public:
    void reverseString(vector<char>& s, int i =0) {
        // if(i>=s.size()/2) return ;
        // swap(s[i], s[s.size()-i-1]);
        // return reverseString(s,i+1);
         int l = 0;
        int r = s.size() - 1;
        while(l<=r){
            swap(s[l++],s[r--]);
        }

    }
};