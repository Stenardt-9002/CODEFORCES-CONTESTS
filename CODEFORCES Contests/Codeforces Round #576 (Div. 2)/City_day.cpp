#include <iostream>
#include <stdlib.h>
#include <stdio.h>

// #include <>
using namespace std;


int main(int argc, char const *argv[])
{
    int x,y,flag1=1,flag2=1;
    int maxflag1=0,maxflag2=0;
    long int pos;
    long int n,i;
    cin>>n>>x>>y;
    long long int arr1[n];
    long long min=0;


    for (i = 0; i < n-1; i++)
    {
      if (arr1[i]>arr1[i+1])
      {
        if (flag2!=0)
        {
          //check
          // also check whewther index exist
          if(i+1)
        }

        flag2 =0;
        flag1++;

      }
      else if (arr1[i]<arr1[i+1])
      {

        if (flag1!=0)
        {
          //check
          //also chek whteher index exist
          if(i)

        }

        flag1 = 0;
        flag2++;
      }

    }


  return 0;
}






// int main(int argc, char const *argv[])
// {
//
//   int x,y,flag1=0,flag2=0;
//   int pos;
//   long int n,i;
//   cin>>n>>x>>y;
//   long long int arr1[n];
//   long long desc=0,asce=0;
//     long long minmin=0,maxmax=0;
//   for (i = 0; i < n; i++)
//   {
//     cin>>arr1[i];
//   }
//   for (i = 0; i < n; i++)
//   {
//     if (arr1[i]<arr1[i+1])
//     {
//       asce++;
//       desc = 0;
//       if (flag1 == 1)
//       {
//         pos = i;
//       }
//
//
//       flag1 = 0;
//       flag2 = 1;
//
//     }
//     else if (arr1[i]>arr1[i+1])
//     {
//       desc++;
//       asce = 0;
//
//       if (flag2 == 1)
//       {
//         pos = i;
//       }
//
//
//       flag1= 1;
//       flag2 = 0;
//
//     }
//
//     if (minmin>asce)
//     {
//       minmin = asce;
//     }
//     if(maxmax>desc)
//     {
//       maxmax = desc;
//     }
//
//     if minmin
//
//
//   }
//
//
//   return 0;
// }
