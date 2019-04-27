#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int count=0;
  for(int j=2;j<n;j+=2)
  {
    for(int k=1;k+j<=n;k++)
    {
      for(int p=k;p>0;p--)
        count+=p;
    //  cout<<j<<"\t"<<k<<endl;
    }
  }
  cout<<count;
}
