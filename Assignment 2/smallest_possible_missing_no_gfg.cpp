Solution{
    public:
    // Function to find missing integer in array
    // arr: input array
    // n: size of array
    int findMissing(int arr[], int n) 
    { 
        
        // Your code here
        vector<int> positive_number;
        for(int i=0; i<n; i++)
        {
            if (arr[i]>0)
            {
                positive_number.push_back(arr[i]);
            }
        }
        int j;
        sort(positive_number.begin(), positive_number.end());
        if(positive_number[0]>1)
        return 1;
        for ( j=0; j<positive_number.size()-1;j++)
        {
             if(positive_number[j]!=positive_number[j+1] && positive_number[j]!=positive_number[j+1]-1)
             return (positive_number[j]+1);
        }
        return positive_number[j]+1;
    }
};
