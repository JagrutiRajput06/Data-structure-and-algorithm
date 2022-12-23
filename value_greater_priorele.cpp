#include<bits/stdc++.h>
using namespace std;

int count_elements(int arr[], int n)
{

	int count = 1;

	int max = arr[0];

	for(int i = 1; i < n; i++)
	{
		
		if (arr[i] > max)
		{
			
			count += 1;
			max = arr[i];
		}
	}
	return count;
}

int main()
{
	int arr[] = {7,4,8,2,9};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << (count_elements(arr, n));
}

