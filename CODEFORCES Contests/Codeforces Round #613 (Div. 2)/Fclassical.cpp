#include <iostream>
#include <cstring>
using namespace std;


long long int hCFst[10101][10101] ;


long long int gcd(long long int a, long long int b)
{
  long long int temo;
  if (a>b)
  {
    temo = a;
    a = b;
    b = temo;
  }
    if (a == 0)
        return b;

        if (hCFst[b%a][a]>0 && (b%a)<10101 && a<10101)
        {
          return hCFst[b%a][a];

        }
        else if((b%a)<10101 && a<10101)
        {
          hCFst[b%a][a] = gcd(b % a, a);
          return hCFst[b%a][a];
        }
    return gcd(b % a, a);
}


int main(int argc, char const *argv[])
{
  long long int n1;
  long long int max1 = 0;
  long long int mainmax1 = 0;
  std::cin >> n1;
  long long int *arr1 = new long long int [n1];

  for (long long int i = 0; i < n1; i++)
  {
    std::cin >> arr1[i];


  }

  for (long long int i = 0; i < n1; i++)
  {
    for (long long int j = i+1; j < n1; j++)
    {
      // if (hCFst[i][j]>0)
      // {
        max1 = (arr1[i]*arr1[j])/gcd(arr1[i],arr1[j]);

      // }
      // else if(i<10101 && j<10101)
      // {
      //   hCFst[i][j] = gcd(arr1[i],arr1[j]);
      //   max1 = (arr1[i]*arr1[j])/hCFst[i][j];
      //
      // }
      // else
      // {
      //   max1 = (arr1[i]*arr1[j])/gcd(arr1[i],arr1[j]);
      // }
      if (mainmax1<max1)
      {
        mainmax1 = max1;
      }

    }


  }

  std::cout << mainmax1 << '\n';

  return 0;
}
