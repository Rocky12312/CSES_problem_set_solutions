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

void solve(int n){
	ll nx[n+1][9];
	memset(nx,0,sizeof(nx));
	for(int i=8;i>=0;i--){
		nx[1][i] = 9-i;
	}
	for(int i=2;i<n+1;i++){
		nx[i][8] = 1;
	}
	for(int i=2;i<n+1;i++){
		for(int j=7;j>=0;j--){
			nx[i][j] = nx[i-1][j]+nx[i][j+1];
		}
	}
	cout<<nx[n][0]<<endl;
	return;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;cin>>n;
  solve(n);
  return 0;
}

