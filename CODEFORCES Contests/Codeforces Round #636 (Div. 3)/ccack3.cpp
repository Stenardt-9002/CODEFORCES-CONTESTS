
// C program to find longest alternating subsequence in
// an array
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define LONG_MIN -9223372036854775807
typedef long long int lld;
using namespace std;


lld max(lld a, lld b) { return (a > b) ? a : b; }

lld zzis(lld arr[], lld n)
{

	lld las[n][2];
  lld sumvar[n][2];
  lld strat ,end;
	for (lld i = 0; i < n; i++)
		{
      las[i][0] = las[i][1] = 1;
      sumvar[i][0] = sumvar[i][1] = 0;
    }


	lld res = 1; // Initialize result

	for (lld i = 1; i < n; i++)
	{
		for (lld j = 0; j < i; j++)
		{
			if (arr[j] < arr[i] &&(arr[j]*arr[i])<0 && las[i][0] < las[j][1] + 1)
      {
        las[i][0] = las[j][1] + 1;
        sumvar[i][0] = sumvar[j][1] + arr[j];
      }

			else if( arr[j] > arr[i] &&(arr[j]*arr[i])<0 && las[i][1] < las[j][0] + 1)
			{
          las[i][1] = las[j][0] + 1;
        sumvar[i][1] = sumvar[j][0] + arr[i];
      }
      else
      {
        strat = 0;
      }
		}

		if (res < max(las[i][0], las[i][1]))
			res = max(las[i][0], las[i][1]);
	}
  // std::cout << '\n';
  // for (lld i = 0; i < n; i++)
  // {
  //   cout<<las[i][0]<<" "<<las[i][1]<<endl;
  // }
  // std::cout << '\n';
  // for (lld i = 0; i < n; i++)
  // {
  //   cout<<sumvar[i][0]<<" "<<sumvar[i][1]<<endl;
  // }

	return res;
}

int main()
{
  // lld arr[]= {1, 2 ,3 ,-1, -2};
  // lld arr[]={1 ,-1000000000, 1 ,-1000000000, 1 ,-1000000000};
  lld arr[] = {-2 ,8 ,3, 8 ,-4 ,-15 ,5, -2 ,-3 ,1};

	lld n = sizeof(arr)/sizeof(arr[0]);
	// printf("Length of Longest alternating subsequence is %d\n",
			lld lenth1 = zzis(arr, n) ;
      std::cout << lenth1 << '\n';
      lld sum1 = 0,maxSum = LONG_MIN;
      lld flag1 = 12;
      for (lld j1 = 0; j1 < n-lenth1; j1++)
      {
        for (lld i = j1; i < j1+lenth1-1; i++)
        {
            if (arr[i]*arr[i+1]<0)
            {
                sum1+=arr[i];
            }
            else
            {
              sum1 = 0;
              break;
            }
        }
        if (maxSum<sum1)
        {
            maxSum = sum1;
        }


      }
      std::cout << maxSum << '\n';

	return 0;
}
