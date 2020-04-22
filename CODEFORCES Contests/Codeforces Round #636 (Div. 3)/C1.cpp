
#include<iostream>
#include<stdio.h>
#include <cstring>
typedef long long int lld;

#define LONG_MIN -9223372036854775807

using namespace std;


lld funct(lld arr[], lld n)
{
	if (n == 1)
		return arr[0];
	lld dec[n];
	memset(dec, 0, sizeof(dec));
	lld inc[n];
	memset(inc, 0, sizeof(inc));


	dec[0] = inc[0] = arr[0];

	lld flag = 0 ;

	for (lld i=1; i<n; i++)
	{
		for (lld j=0; j<i; j++)
		{

			if ((arr[j] > arr[i]) && (arr[j] * arr[i])<0)
			{
				dec[i] = max(dec[i], inc[j]+arr[i]);


				flag = 1;
			}


			else if ((arr[j] < arr[i])&&(arr[j] * arr[i])<0 && flag == 1)
      {
        inc[i] = max(inc[i], dec[j]+arr[i]);
          // flag = 0;
      }
		}
	}

	lld result = LONG_MIN;
	for (lld i = 0 ; i < n; i++)
	{
		if (result < inc[i])
			result = inc[i];
		if (result < dec[i])
			result = dec[i];
	}

	return result;
}

int main()
{
	lld arr[]= {1, 2 ,3 ,-1, -2};
	lld n = sizeof(arr)/sizeof(arr[0]);
	cout << "Maximum sum = "
		<< funct(arr , n ) << endl;
	return 0;
}
