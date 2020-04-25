
#include <iostream>
typedef long long int lld;
using namespace std;

int main(int argc, char const *argv[])
{
  lld testcases1;
  std::cin >> testcases1;
  lld noifonputs;
  while (testcases1--)
  {

    std::cin >> noifonputs;
    lld *arr1;
    arr1 = new lld[noifonputs];
    for (lld i = 0; i < noifonputs; i++)
    {
      std::cin >> arr1[i];


    }


    lld sim1 = 0;
    lld cur1;
    for (lld ij1 = 0; ij1 < noifonputs; ij1++)
    {
        cur1 = arr1[ij1];
        int j = ij1;
        while (ij1<noifonputs && arr1[ij1]*arr1[j]>0)
        {
          cur1 = max(cur1,arr1[j]);
          ++j;


        }
        sim1+=cur1;
        ij1 = j-1;


    }








    std::cout << sim1 << '\n';


  }




  return 0;
}
