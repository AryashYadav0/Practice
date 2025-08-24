class Solution {
public:
    int fib(int n) {
        // if(n<=1) return n;
        // return fib(n-1) + fib(n-2);
        if(n==0) return n;
        int f = 0, s= 1, tmp;
        for (int i = 2; i<=n; i++){
            tmp =f+s;
            f = s;
            s = tmp; 
        }
        return s;

        
    }
};