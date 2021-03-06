#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<unordered_map>
#pragma GCC optimize("Ofast")	
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define Mod 1000000007
#define INT_MAX +2147483647
#define INT_MIN -2147483648
#define ulmax 4294967295
#define llmin -9223372036854775808
#define llmax 9223372036854775807
#define ullmax 18446744073709551615 
using namespace std;

void solve(int n,int k,int x){
	int nx[n];
	memset(nx,0,sizeof(nx));
	nx[0] = 0;
	nx[1] = 1;
	for(int i=2;i<n;i++){
		nx[i] = nx[i-2]*(k-1)+nx[i-1]*(k-2);
		//We are trying to make sure that number at previous index do not appear at current index A[i-1]!=A[i]
	}
	cout<<nx[n-1]<<endl;
	return;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;cin>>n;
  int k;cin>>k;
  int x;cin>>x;
  solve(n,k,x);
  return 0;
}

