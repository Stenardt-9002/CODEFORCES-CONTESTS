#include <iostream>
// #include <stdlib.h>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{


  long long int n1,count1L = 0 ,count1R = 0;
  long long int happy1 = 0;
  long long int subsequhappy1 = 0;long long int maxhappy1 = 0;
  int testcaese;
  std::cin >> testcaese;

while(testcaese--)
  {
    std::cin >> n1;
    happy1 = 0;
    long long int *arr1 = new long long int[n1];
    for (long long int i = 0; i < n1; i++)
    {
      std::cin >> arr1[i];
      // if (arr1[i]<=0)
      // {
      //   happy1 = 0;
      // }
      happy1+=arr1[i];

      if (arr1[i]>0)
      {
        subsequhappy1+=arr1[i];
        if (maxhappy1<subsequhappy1)
        {
          maxhappy1 = subsequhappy1;
        }

      }
      else
      {
        subsequhappy1 = 0;
      }
    }

    if (happy1>=maxhappy1)
    {
      std::cout << "YES" << '\n';
    }
    else
    {
      std::cout << "NO" << '\n';
    }



  }
  return 0;
}
