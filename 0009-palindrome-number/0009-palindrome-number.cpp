class Solution {
public:
    bool isPalindrome(int x) {
        int r = 0;
        if (x < 0 || (x % 10 == 0 && x)) return false;
        while (x > r){ 
            r = r * 10 + x % 10;
            x /= 10;
        }
        return x == r || x == r / 10;

        // if(x<0 || (x%10 ==0 && x)) return false; 
        // int rev = 0, org = x;
        // while(x!=0){
        //     int digit = x%10;
        //     rev = rev *10 +digit;
        //     x/=10;
        // }
        // if(rev==org) return true;
        // else  return false ;
    }
};