#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n) 
    { 
    	// Complete the function
    	for(int i=0; i<n-1; i++)
    	{
    	    if( arr[i] == arr[i+1])
    	    {
    	        arr[i]*=2;
    	        arr[i+1]=0;
    	        i++;
    	    }
    	}
    	int index=0, j=0;
    	while(j<n)
    	{
    	    if( arr[j] != 0)
    	    {
    	        arr[index]=arr[j];
    	        index++;
    	    }
    	    j++;
    	}
    	 while(index<n)
    	 {
    	     arr[index]=0;
    	     index++;
    	 }
    	
    }
}; 

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    Solution ob;
    ob.modifyAndRearrangeArr(arr, n);
    for(int i=0; i<n; i++)
    {
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
}
	return 0;
}
