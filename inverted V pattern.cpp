#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j,k=0;
    for(i=n-1;i>=0;i--)
    {
        for(j=n-1;j>k;j--)
            cout<<" ";
        cout<<char(i+65);
        for(j=1;j<(k*2);j++)
            cout<<" ";
        if(i<n-1)
            cout<<char(i+65);
        cout<<"\n";
        k++;
    }
}
int main()
{
    int n = 5;
     pattern(n);
    return 0;
}
