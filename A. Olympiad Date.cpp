#include<bits/stdc++.h>
using namespace std;
int main( )
{

  int t;
  cin>>t;
  while(t--)
  {
   
      string p="0001225";
      string b;
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      int count=0;
      for(int j=0;j<n;j++)
      {
          string t=to_string(a[j]);
           b+=t;
          count++;
          sort(b.begin(),b.end());
          if(b==p)
          break;
          
          

      }
      if(b!=p)
      cout<<"0";
      else
      cout<<count;



  }


}