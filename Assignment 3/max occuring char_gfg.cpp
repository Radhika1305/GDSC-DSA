class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int count[256]={0};
        int max = 0;
        char ans;
        int i = 0;
        while(str[i]!='\0')
        {
            count[str[i]]++;
            i++;
        }
        for ( int j=0; j<256; j++)
        {
            if (count[j]> max)
            {
                ans = char(j);
                max = count[j];
            }
        }
        return ans;
    }

};
