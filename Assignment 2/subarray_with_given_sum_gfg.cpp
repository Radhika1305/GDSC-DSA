class Solution
{ public:
	vector<int> subarraySum(int arr[], int n, long long s)
	{
		int i=0;
		int start = 0;
		int end = 0;
		long long count = 0;
		vector<int> v;
		while(i<n)
		{
			end = i;
			count = count + arr[i];
			if (count == s)
			{
				v.push_back(start + 1);
				v.push_back(end + 1);
				break;
			}
			else if(count>s)
			{
				i = start + 1;
				start = start + 1;
				count = 0;
				continue;
			}
			i++;
		}
		if (v.size() == 0)
		{
			v.push_back(-1);
		}
		return v;
	}
}
