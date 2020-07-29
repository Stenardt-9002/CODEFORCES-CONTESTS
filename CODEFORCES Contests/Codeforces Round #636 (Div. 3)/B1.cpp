#include <iostream>
// #include <stdio>
typedef long long int lld;


using namespace std;


int main(int argc, char const *argv[])
{

  lld numbre1 ,testcases,ebensum = 0,oddsumb = 0;
  std::cin >> testcases;
  lld *numbre1arra;
  for (lld k1 = 0; k1 < testcases; k1++)
  {
    ebensum = 0;oddsumb = 0;
    std::cin >>numbre1;

    numbre1arra = new lld[numbre1];
    for (lld ij12 = 0; ij12 < numbre1; ij12++)
    {
      numbre1arra[ij12] =  -1;
    }
    for (lld j = 0; j < numbre1/2; j++)
    {
      numbre1arra[j] = (j+1)*2;
      ebensum+=numbre1arra[j];
      if (j<(numbre1/2)-1)
      {
          numbre1arra[j+(numbre1/2)] = ((j+1)*2)-1;
          oddsumb+=numbre1arra[j+(numbre1/2)];
        }
    }

    // std::cout << "ARRAY ";
    // for (lld ij = 0; ij < numbre1; ij++)
    // {
    //   std::cout << numbre1arra[ij]<<" " ;
    // }
    // std::cout <<endl<< ebensum << '\n';
    // std::cout << oddsumb << '\n';
    if (((ebensum-oddsumb)%2)==0)
    {

      cout<<"NO"<<endl;
    }
    else
    {
      if(numbre1arra[numbre1-2]<(ebensum-oddsumb))
      {
        numbre1arra[numbre1-1] = ebensum-oddsumb;
        std::cout << "YES" << '\n';
        for (lld ij = 0; ij < numbre1; ij++)
        {
          std::cout << numbre1arra[ij]<<" " ;
        }
      }
      else
      {
        std::cout << "NO"<<endl;
      }
    }

  }


  // for (lld j1 = 0; j1 < numbre1; j1++) {
  // }
  /* code */







  return 0;
}
