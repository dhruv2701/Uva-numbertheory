#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool primes[10001];
vector<int> prime;
int main() {
	primes[0]=primes[1]=true;
	for(int i=2;i<=10000;i++)
	{
		if(!primes[i])
		{
			prime.push_back(i);
			for(int j=2*i;j<=10000;j+=i)
			primes[j]=true;
		}
	}
	        //cout<<prime.size()<<" ";
	        //int cnt=0;
	        
		/*for(int i=0;i<prime.size();i++)
		{
	          cout<<prime[i]<<" ";
		}*/
		int t;cin>>t;
		while(t--){
		int n;cin>>n;
		int low=0,high=prime.size()-1;
		int ans;
		while(low<=high)
		{
		  int mid=low+(high-low)/2;
		  //cout<<prime[mid]<<" ";
		  if(prime[mid]*2>n)
		  {ans=prime[mid];
		  high=mid-1;}
		  else
		  low=mid+1;
		 // cout<<ans<<" ";
		
		}
		cout<<ans<<"\n";
		}
	        
}	