#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

typedef long long int lld;



// vector<lld> cgettwodivsor(lld n,lld notqualto,lld ntqual1)
vector<lld> cgettwodivsor(lld n,lld ntqual)
{
  std::vector<lld> v1;
  for (lld i = 2; i < sqrt(n); i++)
  {
    if (n%i==0)
    {
      if (n/i==i&&i!=ntqual)
      {
        // v1.push_back(i);
      }
      else
      {
        if(i!=ntqual && n/i!=ntqual)
        {
          v1.push_back(i);
          v1.push_back(n/i);
          std::cout << "REACHED" << '\n';
          for (auto it = v1.begin(); it != v1.end(); ++it)
             cout << *it<< ' ';
          return v1;
        }
      }

    }

  }
  return v1;

}


vector<lld> disorgreatertwo(lld n)
{

  std::vector<lld> v;
  for (lld i = 2; i <=sqrt(n); i++)
  {
    v.clear();
    if (n%i==0)
    {
      if (n/i==i)
      {
        v.push_back(i);
        std::vector<lld> l1 = cgettwodivsor(i,0);
        // if (l1[0]!=i && l1[1]!=i)
        if(l1.size()>1)
        {
          if (l1[0]!=l1[1])
          {
            v.push_back(l1[0]);
            v.push_back(l1[1]);
            return v;
          }
        }

      }
      else
      {
        v.push_back(i);
        v.push_back(n/i);

        std::vector<lld> l2 = cgettwodivsor(i,n/i);
        if (l2.size()>1)
        {
          v.pop_back();
          v.pop_back();
          v.push_back(n/i);
          v.push_back(l2[0]);
          v.push_back(l2[1]);

          return v;
        }
        std::vector<lld> l3 = cgettwodivsor(n/i,i);
        if (l3.size()>1)
        {
          v.pop_back();
          v.push_back(l3[0]);
          v.push_back(l3[1]);
          return v;


        }





      }

    }

  }

  // reutnr -1;//emoty vector
  return v;
}




int main(int argc, char const *argv[])
{
  int terstcaese;
  lld n;
  std::vector<int> v1;
  std::cin >> terstcaese;
  while (terstcaese--)
  {

    cin>>n;
    // for (lld i = 0; i < sqrt(n); i++)
    // {
    //   if (/* condition */) {
    //     /* code */
    //   }
    //
    // }

  std::vector<lld> v132 = disorgreatertwo(n);
  if (v132.size()==3)
  {
    /* code */
    std::cout << "YES" << '\n';
    for (auto it = v132.begin(); it != v132.end(); ++it)
       cout << *it<< ' ';
       std::cout  << '\n';
  }
  else
  {
    std::cout << "NO" << '\n';
  }

  }


  return 0;
}
