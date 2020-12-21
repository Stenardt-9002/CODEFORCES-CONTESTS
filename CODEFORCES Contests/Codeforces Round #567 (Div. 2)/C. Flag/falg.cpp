#include <iostream>

using namespace std;


int recursion(int strt,int col,int n, int m)
{
  /* code */

}


int main(int argc, char const *argv[])
{
  int n,m;
  cin>>n>>m;
  char intup[n][m];

  for (size_t i = 0; i < n; i++)
  {
      for (size_t j = 0; j < m; j++)
      {
        std::cin >> intup[i][j];
      }

  }
  int z;

int max_hieght1 = 0,max_hieght2 = 0,max_hieght3 = 0;
char prev = intup[0][0];
int flagfirtrow=0,flagsecrow=0,flagthirdrow=0;
int sum = 1;
std::cout << m << '\n';
  for (size_t i = 1; i < n; i++)
  {

    std::cout << "Stop" <<intup[0][i]<< '\n';
    if (intup[0][i]==prev)
    {
      sum +=1;
      std::cout << sum << '\n';
    }
    else if(flagfirtrow==0)
    {
      max_hieght1 = sum;
        sum =1;
        flagfirtrow = 1;
        prev = intup[0][i];
    }

    else if(flagsecrow==0 && sum<=max_hieght1)
    {
      max_hieght2 = sum;
        sum =1;
        flagsecrow = 1;
        prev = intup[0][i];
    }
    else if(flagthirdrow==0 && sum<=max_hieght2)
    {
      max_hieght3 = sum;
        sum =0;
        flagthirdrow = 1;
        prev = intup[0][i];
    }
    std::cin >> z;

  }

  if(flagthirdrow==0 && sum<=max_hieght2)
  {
    max_hieght3 = sum;
      sum =0;
      flagthirdrow = 1;

  }


  std::cout << "first " <<max_hieght1<< '\n';
  std::cout << "second " << max_hieght2<<'\n';
  std::cout << "third" <<max_hieght3<< '\n';


  int set_row = 0,set_col = 0;

  return 0;
}
