#include<iostream>
#include <stdio.h>
#include <math.h>
typedef long long int lld;

using namespace std;



int main(int argc, char const *argv[])
{
  int testcases;
  std::cin >> testcases;
  int m,n;
  while (testcases--)
  {
    std::cin >> m>>n;
    // if (m%n!=0)
    // {
    //   printf("YES" );
    // }
    // else
    // {
    //   float var = m/n;
    //   if
    //
    // }

    if (m%n==0)
    {
      printf("YES\n" );
    }
    else
    {
      printf("NO\n" );

    }



  }
  return 0;
}
