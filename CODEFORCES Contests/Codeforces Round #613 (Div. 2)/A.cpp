#include <iostream>
// #include <stdlib.h>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{


  long long int length1,count1L = 0 ,count1R = 0;
  string str1;
  std::cin >> length1;
  std::cin >> str1;
  for (long long int i = 0; i < length1; i++)
  {
    if (str1[i]=='L')
    {
      count1L++;
    }
    if (str1[i]=='R')
    {
      count1R++;
    }
  }

  std::cout << count1L+count1R+1 << '\n';

  return 0;
}
