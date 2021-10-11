class Solution
{
	public:
	void sort012 (int a[], int n)
	{
		int i=0, n0=0, n1=0, n2=0;
        while (i<n)
        {
            if (a[i] == 0)
              n0++;
            else if ( a[i] == 1)
              n1++;
            else
              n2++;
            i++;
        }
        int j=0;
        while (j<n0)
        {
            a[j]=0;
            j++;
        }
         while (j< (n0+n1))
        {
            a[j]=1;
            j++;
        }
         while (j< (n0+n1+n2))
        {
            a[j]=2;
            j++;
        }
	}
};
