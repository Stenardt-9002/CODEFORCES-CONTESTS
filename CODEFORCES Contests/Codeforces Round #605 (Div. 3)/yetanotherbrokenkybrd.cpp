#include <iostream>
#include <stdio.h>
#include <map>
// #include <stack>
using namespace std;

int main(int argc, char const *argmp[])
{

  string str1;
  long long int n,k,ans,count = 0;
  char char1;
  std::cin >> n>>k;

  std::cin >> str1;
  // std::cout << "String is "<<str1 << '\n';
  std::map<char,long int> mp;
  map<char, int>::iterator ptr;
  for (long long int i = 0; i < k; i++)
  {
    std::cin >> char1;
    mp[char1] = 1;


  }
  // std::cout << "reached" << '\n';
  long long int j=0;
  // stack <char> s;
  ans = 0;
  count = 0;
  while (j<str1.length())
  {
    if(mp.find(str1[j])!=mp.end() )
    {
      // s.push(str1[j]);
      count++;
    }
    else
    {
      n = count;
      // s.empty();
      count = 0;
      n = (n+1)*(n)/2;
      ans+=n;
    }
    j++;
  }
  ans = ans+((count*(count+1))/2);
  std::cout << ans << '\n';
  // for (ptr = ar.begin(); ptr < ar.end(); ptr++)
  //       cout << *ptr << " ";


  return 0;








  // ptr = mp.find('a');
  // if (ptr==mp.end())
  // {
  //   std::cout << "Not found" << '\n';
  // }
  // else
  // {
  //   std::cout << "found" << '\n';
  //
  //
  // }






}
