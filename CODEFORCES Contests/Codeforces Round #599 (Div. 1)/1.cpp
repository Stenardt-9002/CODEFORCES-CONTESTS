#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
  long long int var,i,ans;
  std::vector<long long int> v;


  cin>>var;
  if (var==1)
  {
    ans = 1;
    std::cout << ans;return 0;
  }
  for (i = 2; i <= sqrt(var); i++)
  {
    if (var%i==0)
    {
      v.push_back(i);
      while (var%i==0)
      {
        var = var/i;
      }


    }
  }
  if (var!=1)
  {
    v.push_back(var);
  }

  if (v.size()>1)
  {
    ans = 1;
  }
  else
  {
    ans = v[0];
  }
  std::cout << ans;
  return 0;
}
