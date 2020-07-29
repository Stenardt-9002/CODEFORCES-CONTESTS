#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char const *argv[])
{


  long long int q,a,b,c,a1,b1,c1,sum,sum2,temp;
  double avg = 0;
  std::cin >> q;
  while (q--)
  {
    sum = 0;
    std::cin >> a1>>b1>>c1;
    a = a1;
    b = b1;
    c = c1;
    avg = (float)(a+b+c);
    avg /=3;
    avg = (int)(avg);
    if (avg>(float)(a))
    {
      a = a+1;

    }
    else if (avg<(float)(a))
    {
      a = a-1;

      /* code */
    }

    else if(avg==(float)(a))
    {
      ;
    }





    if (avg>(float)(b))
    {
      b = b+1;

    }
    else if (avg<(float)(b))
    {
      b = b-1;

      /* code */
    }

    else if(avg==(float)(b))
    {
      ;
    }



    if (avg>(float)(c))
    {
      c = c+1;

    }
    else if (avg<(float)(c))
    {
      c = c-1;

      /* code */
    }

    else if(avg==(float)(c))
    {
      ;
    }
    sum = 0;
    temp = c-a;
    if (temp<0)
    {
      sum = sum-temp;
    }
    else
    {
      sum = sum+temp;

    }

    temp = a-b;
    if (temp<0)
    {
      sum = sum-temp;
    }
    else
    {
      sum = sum+temp;

    }

    temp = c-b;
    if (temp<0)
    {
      sum = sum-temp;
    }
    else
    {
      sum = sum+temp;

    }

    sum2 = sum;








    a = a1;
    b = b1;
    c = c1;
    sum = 0;
    avg = (float)(a+b+c);
    avg /=3;
    avg = (int)(avg);
    avg+=1;
    if (avg>(float)(a))
    {
      a = a+1;

    }
    else if (avg<(float)(a))
    {
      a = a-1;

      /* code */
    }

    else if(avg==(float)(a))
    {
      ;
    }





    if (avg>(float)(b))
    {
      b = b+1;

    }
    else if (avg<(float)(b))
    {
      b = b-1;

      /* code */
    }

    else if(avg==(float)(b))
    {
      ;
    }



    if (avg>(float)(c))
    {
      c = c+1;

    }
    else if (avg<(float)(c))
    {
      c = c-1;

      /* code */
    }

    else if(avg==(float)(c))
    {
      ;
    }
    sum = 0;
    temp = c-a;
    if (temp<0)
    {
      sum = sum-temp;
    }
    else
    {
      sum = sum+temp;

    }

    temp = a-b;
    if (temp<0)
    {
      sum = sum-temp;
    }
    else
    {
      sum = sum+temp;

    }

    temp = c-b;
    if (temp<0)
    {
      sum = sum-temp;
    }
    else
    {
      sum = sum+temp;

    }



    if (sum2<sum)
    {
      std::cout << sum2 << '\n';
    }
    else
    {
      std::cout << sum<<endl;

    }









  }


  return 0;
}
