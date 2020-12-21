#include <iostream>
typedef long long int lld;

using namespace std;

int main(int argc, char const *argv[])
{
  int testcasrse;
  std::cin >> testcasrse;
  int n ,d;
  int sum;
  int arr1[100];
  int index1,j,falg;
  while (testcasrse--)
  {
    std::cin >> n>>d;
    falg = 0;
    for (int i = 0; i < n; i++)
    {
      std::cin >> arr1[i];

    }

// std::cout << "\nArrya";
// for (int i = 0; i < n; i++)
// {
//   std::cout << arr1[i];
//
// }

    index1 = 1;

    while (d!=0)
    {
      j = 1;
      if (n==1)
      {
        break;
      }
      while (1)
      {

        if (arr1[j]!=0 || j==n-1)
        {
          if (j==n-1)
          {
            falg = 1;
          }
          break;
        }

        j++;
        // std::cout << "Forkj "<<j << '\n';

      }
      // std::cout << "j "<<j << '\n';
      // cin>>sum;
      index1 = j;
      while (d!=0 && arr1[index1]!=0 &&index1!=0)
      {
        // sum = sum+(index1*arr1[index1]);
        arr1[index1] = arr1[index1]-1;
        arr1[index1-1]++;
        d--;
        index1--;


      }
      // std::cout << "\n d "<<d << '\n';
      // for (int i = 0; i < n; i++)
      // {
      //   std::cout << arr1[i];
      //
      // }
      // cout<<"suim";
      // cin>>sum;
      if (falg==1)
      {
        break;
      }

    }

    std::cout << arr1[0] << '\n';

  }




  return 0;
}
