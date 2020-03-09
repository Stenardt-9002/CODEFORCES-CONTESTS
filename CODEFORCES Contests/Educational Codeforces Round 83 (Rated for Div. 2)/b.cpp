// #include<iostream>
// #include <stdio.h>
// #include <math.h>
// #include <map>
// #include <vector>
// #include <utility>
// // typedef long long int lld;
//
// using namespace std;
//
//
//
// int main(int argc, char const *argv[])
// {
//   int testcases;
//   // std::map<int, int> storez;
//   // std::vector<int,int> storez;
//   // pair
//   pair <int,int> sotr12x[100] ;
//   int strat1,flag;
//      // vector<int,int>::iterator ptr;
//
//   std::cin >> testcases;
//   int n;
//   int arr1[100];
//   while (testcases--)
//   {
//     std::cin >>n;
//     for (int i = 0; i < n; i++)
//     {
//       std::cin >> arr1[i];
//
//     }
//
//     Check_again:
//      strat1=0;
//      flag  = 0;
//     for (int index = 0; index < n; index++)
//     {
//       for (int end1 = index+1; end1 < n; end1++)
//       {
//         if (index-arr1[index]==end1-arr1[end1])
//         {
//           // printf("OK" );
//           // storez.push_back(index,end1);
//           sotr12x[strat1++] = make_pair(index,end1);
//           flag = 1;
//         }
//
//
//       }
//     }
//
//     // printf("\n" );
//     // for (auto j = storez.begin(); j != storez.end(); ++j)
//     //     cout << *j << " ";
//         // for (ptr = storez.begin(); ptr < storez.end(); ptr++)
//         //         cout << *ptr << " ";
//
//     int swap;
//       for (int j = 0; j < strat1; j++)
//       {
//         // std::cout << sotr12x[j].first<<" "<<sotr12x[j].second<<" ,";
//         // if (sotr12x[j].second-sotr12x[j].first==1)
//         // {
//         //
//         // }
//         // else
//         // {
//           swap = arr1[sotr12x[j].second];
//           arr1[sotr12x[j].second] = arr1[sotr12x[j].first];
//           arr1[sotr12x[j].first] = swap;
//         // }
//       }
//       if (flag==1) {
//         goto Check_again;
//       }
//
//       for (int i = 0; i < n; i++)
//       {
//       std::cout << arr1[i] << " ";
//
//       }
//
//
//
//       std::cout << '\n';
//
//
//   }
//   return 0;
// }/



//
// #include<iostream>
// #include <stdio.h>
// #include <math.h>
// #include <map>
// #include <vector>
// #include <utility>
// #include <algorithm>
// // typedef long long int lld;
//
// using namespace std;
//
//
//
// int main(int argc, char const *argv[])
// {
//   int testcases;
//   // std::map<int, int> storez;
//   // std::vector<int,int> storez;
//   // pair
//   pair <int,int> sotr12x[100] ;
//   int strat1,flag;
//      // vector<int,int>::iterator ptr;
//
//   std::cin >> testcases;
//   int n,varconti = 1,once = 1;;
//   int arr1[100];
//   while (testcases--)
//   {
//     std::cin >>n;
//     for (int i = 0; i < n; i++)
//     {
//       std::cin >> arr1[i];
//       // arr1[i] = i-arr1[i];
//
//     }
//     varconti = 1;
//     while (varconti!=0)
//     {
//     // {std::cout << "/* message */" << '\n';
//       for (int index = 0; index < n; index++)
//       {
//         for (int end1 = index+1; end1 < n; end1++)
//         {
//           if (index-arr1[index]==end1-arr1[end1])
//           {
//             varconti = 2;
//             once = arr1[n-1];
//             for (int ji = n-1; ji >0; ji--)
//             {
//               arr1[ji] = arr1[ji-1];
//             }
//             arr1[0] = once;
//             goto teae;
//           }
//
//
//         }
//       }
//       varconti = 0;
//       teae:
//       if (varconti!=2)
//       {
//         varconti = 0;
//
//       }
//     }
//
//
//
//
//                     for (int i = 0; i < n; i++)
//                     {
//                     std::cout << arr1[i] << " ";
//
//                     }
//
//
//
//                     std::cout << '\n';
//
//
//
//   }
//   return 0;
// }



#include<iostream>
#include <stdio.h>
#include <math.h>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
// typedef long long int lld;

using namespace std;



int main(int argc, char const *argv[])
{
  int testcases;
  // std::map<int, int> storez;
  // std::vector<int,int> storez;
  // pair
  pair <int,int> sotr12x[100] ;
  int strat1,flag;
     // vector<int,int>::iterator ptr;

  std::cin >> testcases;
  int n,varconti = 1,once = 1;;
  int arr1[100];
  while (testcases--)
  {
    std::cin >>n;
    for (int i = 0; i < n; i++)
    {
      std::cin >> arr1[i];
      // arr1[i] = i-arr1[i];

    }
    varconti = 1;
    while (varconti!=0)
    {
    // {std::cout << "/* message */" << '\n';
      for (int index = 0; index < n; index++)
      {
        for (int end1 = index+1; end1 < n; end1++)
        {
          if (index-arr1[index]==end1-arr1[end1])
          {
            varconti = 2;
            once = arr1[n-1];
            for (int ji = n-1; ji >0; ji--)
            {
              arr1[ji] = arr1[ji-1];
            }
            arr1[0] = once;
            goto teae;
          }


        }
      }
      varconti = 0;
      teae:
      if (varconti!=2)
      {
        varconti = 0;

      }
    }




                    for (int i = 0; i < n; i++)
                    {
                    std::cout << arr1[i] << " ";

                    }



                    std::cout << '\n';



  }
  return 0;
}
