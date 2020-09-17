#include<bits/stdc++.h>   //only for p={2, 3, 5, 7, 13, 17, 19, 31} 2^(p-1)*2^(p)-1 even perfect numbers exist
using namespace std;
#define ll long long

bool primes[33];
void sieve()
{
 primes[0]=primes[1]=true;
 for(int i=2;i*i<=31;i++)
 {
   if(!primes[i])
   {
     for(int j=i*i;j<=31;j+=i)
     primes[j]=true;
   }
 }  
}     
ll bin_exp(int a, int b)
{
  ll res=1;
  while(b)
  {
    if(b%2==1)res=res*a;
    a=a*a;
    b/=2;
  }
  return res;
}  
int main()
{
  int n;
  sieve();
  while(scanf("%d",&n))
  {
   if(n==0)break;
  
   if(primes[n])
   cout<<"Given number is NOT prime! NO perfect number is available.";
   else if(!primes[n] && (n==11||n==23||n==29))
   cout<<"Given number is prime. But, NO perfect number is available.";
   else
   cout<<"Perfect: "<<bin_exp(2,n-1)*(bin_exp(2,n)-1)<<"!";
   cout<<"\n";
  }
  

}













