#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
  long int q;
  std::cin >> q;
  string str1;


  while (q--)
  {

    std::cin >> str1;
    for (long int i = 0; i < str1.length(); i++)
    {
      std::cout << str1[i] << '\n';

    }



  }



  return 0;
}
