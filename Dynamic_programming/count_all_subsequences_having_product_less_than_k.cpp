#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
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

void solve(int n,ll k,ll arr[]){
	ll nx[n+1][k+1];
	for(int i=0;i<n+1;i++){
		nx[i][0] = 0;
	}
	for(int i=0;i<k+1;i++){
		nx[0][i] = 1;
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<k+1;j++){
			if(arr[i-1]<=j){
				nx[i][j] = nx[i-1][j/arr[i-1]]+nx[i-1][j];
			}else{
				nx[i][j] = nx[i-1][j];
			}
		}
	}
	cout<<nx[n][k]-1/*minus 1 for empty subsequence*/<<endl;
	return;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;cin>>n;
  ll k;cin>>k;
  ll arr[n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
  solve(n,k,arr);
  return 0;
}
