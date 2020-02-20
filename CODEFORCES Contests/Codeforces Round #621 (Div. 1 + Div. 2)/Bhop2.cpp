#include <iostream>
#include <vector>
typedef long long int lld;

using namespace std;
//n side s polygon
int main(int argc, char const *argv[])
{
int testcasrse;
lld n,distance,hops,max,temp;
int onejump = 1;
double calc;
std::cin >> testcasrse;

while (testcasrse--)
{
  std::cin >> n>>distance;
  max = 0;
  onejump = 1;
  hops = 0;
  for (lld i = 0; i < n; i++)
  {
    std::cin >> temp;
    if (max<temp)
    {
      max = temp;
    }
    if (temp == distance)
    {
      onejump ==2;
    }
  }
  if (onejump==2)
  {
    hops = 1;
  }
  else
  {
    if (max>distance)
    {
      hops = 2;
    }
    else
    {

      calc = ((float)(distance))/((float)(max));
      if (calc == (int)(calc))
      {
        hops = (int)(calc);
      }
      else
      {
        hops = (int)(calc)+1;
      }
    }
  }

  std::cout << hops << '\n';
}





  return 0;
}
