#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
  int m,n;
  cin>>n>>m;
  char str[n][m];
  string st,test;
  getline(cin,test);
  for(int i=0;i<n;i++)
  {
    getline(cin,st);
    for(int j=0;j<m && st[j]!='\0';j++)
      str[i][j]=st[j];
  }
  int count=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(str[i][j]=='s')
        {
          if(str[i-1][j+1]=='a' && str[i-2][j+2]=='b' && str[i-3][j+3]=='a' && i>=3 && j+3<m)
            count++;
          if(str[i][j+1]=='a' && str[i][j+2]=='b' && str[i][j+3]=='a' && j+3<m)
            count++;
          if(str[i+1][j]=='a' && str[i+2][j]=='b' && str[i+3][j]=='a' && i+3<n)
            count++;
          if(str[i+1][j+1]=='a' && str[i+2][j+2]=='b' && str[i+3][j+3]=='a' && i+3<n && j+3<m)
            count++;
        }
    }
  }
  cout<<count;
}
