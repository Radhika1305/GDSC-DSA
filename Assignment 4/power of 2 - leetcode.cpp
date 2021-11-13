class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if (n==0)
            return false;
        if (n%2==1 && n!=1)
            return false;
        else if (n==1)
            return true;
        int small_number = n/2;
        bool small_result = isPowerOfTwo(small_number);
        return small_result;
    }
};
