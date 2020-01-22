#include <iostream>
#include <cstring>
using namespace std;

typedef long long int lld;

int main(int argc, char const *argv[])
{
  lld terstcaese;
  lld a,b,c ,d;
  lld sum ;
  std::cin >> terstcaese;
  while (terstcaese--)
  {

    cin>>a>>b>>c>>d;
    sum = a+b+c+d;
    if(sum%3==0)
    {
      sum = sum/3;
      if(sum>=a&&sum>=b&&sum>=c)
      {
        std::cout << "YES" << '\n';
      }
      else
      {
        std::cout << "NO" << '\n';
        
      }
    }

    else
    {
      std::cout << "NO" << '\n';
    }
  }


  /* code */
  return 0;
}
