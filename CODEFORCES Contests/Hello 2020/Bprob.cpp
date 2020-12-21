#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int corect(long long int arr1[],long long int siez)
{
    long long int min = arr1[0];
    for (long long int i = 0; i < siez; i++)
    {
      if(arr1[i]>min)
      {
        return 1;
      }
      else
      {
        min = arr1[i];
      }


    }
    return -1;
}

int main(int argc, char const *argv[])
{

  long long int n;

  cin>>n;
  long long int *sizeofar = new long long int[n];
  long long int **inpu1t = new long long int*[n];
  long long int *min1 = new long long int[n];
  long long int *max1 = new long long int[n];
  long long int *ascenttrue = new long long int[n];
  for (long long int i = 0; i < n; i++)
  {
    std::cin >> sizeofar[i];
    inpu1t[i] = new long long int[sizeofar[i]];
    long long int maxtemp=0,mintemp;
    for (long long int j = 0; j < sizeofar[i]; j++)
    {
      std::cin >> inpu1t[i][j];
      if(j==0)
      {
        maxtemp = mintemp = inpu1t[i][j];
      }

      if (inpu1t[i][j]>maxtemp)
      {
        maxtemp = inpu1t[i][j];
      }


      if (inpu1t[i][j]<mintemp)
      {
        mintemp = inpu1t[i][j];
      }

    }
    max1[i] = maxtemp;
    min1[i] = mintemp;

  }

  long long int ans = 0;
  for (long long int i = 0; i < n; i++)
  {
      for (long long int j = 0; j < n; j++)
      {
        if (min1[i]<max1[j]|| corect(inpu1t[i],sizeofar[i])==1 || corect(inpu1t[j],sizeofar[j])==1)
        {
          ans+=1;

        }


      }
  }
std::cout << ans << '\n';
  return 0;
}
