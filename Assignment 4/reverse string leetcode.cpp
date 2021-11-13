class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int n = s.size();
        char* p1 = &s[0];
        for(int i = 0; i<n/2; i++)
        {
            char e = *p1;
            *p1 = s[n-i-1];
            s[n-i-1]=e;
            p1++;
        }
    }
};
