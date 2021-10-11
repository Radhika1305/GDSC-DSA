class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n)
    {
        //sort array
        for(int step = 0; step< n-1; step++)
        {
            for(int i=0; i<n-step-1; i++)
            {
                if(arr[i]>arr[i+1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
        }
        int final[n];
        int j=0;
        for(int i=d; i<n; i++)
        {
            final[j] = arr[i];
            j++;
        }
        for(int i=0; i<d; i++)
        {
            final[j] = arr[i];
            j++;
        }
        for(int i=0; i<n; i++)
        {
            arr[i] = final[i];
        }
        
        
        
        //rotate array
        // code here
    }
};
