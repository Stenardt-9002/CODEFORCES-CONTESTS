// // https://codeforces.com/problemset/problem/1738/B


// #include <bits/stdc++.h>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/assoc_container.hpp>


// using namespace std;
// using namespace __gnu_pbds ;
// typedef  long long int ll;
// #define DEBUG_var 1
// #define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


// const int mod1 = (1e9+7);
// const int MOD1 = 1000000007;

// bool solve_broth(int n , int k , vector<long long> array)
// {
//     if(k==1)
//         return true ;

//     vector<int> diff;
//     for (int i1 = 1; i1 < k ; i1++)
//         diff.push_back(array[i1]-array[i1-1]);

//     if(is_sorted(diff.begin() ,diff.end()) && (array[0]<=(diff[0]*(n-k+1))) )
//         return true ;
    
//     return false ;
// }

// int main(int argc, char const *argv[])
// {
//     fastIO
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output1.txt","w",stdout);
//     #endif 
//     int testcases=1 ;
//     cin>>testcases;
//     while (testcases--)
//     {
//         int n ,k,last;
//         cin>> n>>k;

//         vector<long long> array(k) ;
//         for (int i1 = 0; i1 < k; i1++)
//             cin>>array[i1];
//         if(solve_broth(n,k,array))
//             cout<<"Yes\n";
//         else   
//             cout<<"No\n";
//     }
    

//     return 0;
// }
#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
	int n, k;
	cin >> n >> k;
	vector<long long> s(k);
	for (int i = 0; i < k; ++i)
		cin >> s[i];
	if (k == 1)
	{
		cout << "YES" << endl;
		return;
	}
	// vector<long long> a;
    bool sorted_flag = true ;
    long long first_diff = s[1]-s[0];
    long long curre_diff = s[1]-s[0];

	for (int i = 2; i <k && sorted_flag; ++i)
    {
		if((s[i] - s[i - 1])<curre_diff )
            sorted_flag = false ;
        curre_diff = s[i] - s[i - 1];
    }
        
	if (!sorted_flag)
	{
		cout << "NO" << endl;
		return;
	}
	if (s[0] >first_diff * (n - k + 1))
	{
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
}
 
int main()
{
	int tests;
	cin >> tests;
	while (tests--) solve();
	return 0;
}
