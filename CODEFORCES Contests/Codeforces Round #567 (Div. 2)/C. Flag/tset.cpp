#include<iostream>
#include<vector>
using namespace std;
string intup[1000];

int product[1000][1000]={0};
vector<int> vrtorans[1000];
int main()
{
  char prevvar;
  int n,m;
  int sumans =0;

  int cmpare1,vrifed,end1;


	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>intup[i];
	}
	for(int i=0;i<m;i++)
  {
		prevvar=intup[0][i];
		vrtorans[i].push_back(0);
		for(int j=0;j<n;j++)
    {
			if(intup[j][i]!=prevvar)
      {
				prevvar=intup[j][i];
				vrtorans[i].push_back(j-1);
				vrtorans[i].push_back(j);
			}
		}
		vrtorans[i].push_back(n-1);
	}


// std::cout << "Dhow vecotors" << '\n';
// // for (size_t i = 0; i < vrtorans[i].size(); i++)
// // {
// //   std::cout << vrtorans[0][i] ;
// // }
//
//

// for(int j=0;j<m;j++)
// {  for(vector<int>::iterator itr=vrtorans[j].begin();itr!=vrtorans[j].end();++itr)
//   {
//     std::cout << *itr << " ";
//   }
//   std::cout << '\n';
// }


// int cmpare1,vrifed,end1;
// exit(0);


  int strt;
  float goddamit1,goddamit2;
	for(int i=0;i<m;i++)
  {
		for(int j=0;j+4<vrtorans[i].size();j+=2)
    {
			if(vrtorans[i][j+1]-vrtorans[i][j]>=vrtorans[i][j+3]-vrtorans[i][j+2]&& (vrtorans[i][j+5]-vrtorans[i][j+4]>=vrtorans[i][j+3]-vrtorans[i][j+2]) )
      {
				if ( product[vrtorans[i][j+1]-(vrtorans[i][j+3]-vrtorans[i][j+2])][i]==0)
        {
        	cmpare1=vrtorans[i][j+1]-(vrtorans[i][j+3]-vrtorans[i][j+2]);
					end1=vrtorans[i][j+3]+(vrtorans[i][j+3]-vrtorans[i][j+2])+1;
					vrifed=0;
					strt=i+1;
					while(strt<m)
          {
						vrifed=0;
						for(int i2=cmpare1;i2<=end1;i2++)
            {
							if(intup[i2][strt]!=intup[i2][i])
              {
								vrifed=1;
								break;
							}
						}
						if(vrifed==0)
            {
							product[cmpare1][strt]=1;
							strt++;
						}
						else
							break;
					}

          goddamit1 = ((strt-i)*(strt-i-1))/2;
          // goddamit2 = 1+(strt-i);
          goddamit2 = (strt-i);
          // sumans+=goddamit1+goddamit2-1;
          sumans+=goddamit1+goddamit2;
				}
			}
		}
	}
	cout<<sumans;
}
