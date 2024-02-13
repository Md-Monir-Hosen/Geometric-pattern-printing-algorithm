#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of row";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
          if(j%2==0)
          {
              cout<<"#";
          }
          else{
            cout<<"*";
          }

        }
        cout<<"\n";
    }
}
