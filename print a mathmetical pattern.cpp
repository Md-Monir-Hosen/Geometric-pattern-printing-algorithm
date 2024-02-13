#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    vector<vector<int>>arr(n);
    int num=1;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n-i;j++)
      {
          arr[i].push_back(num++);
      }
  }
   for(int i=n-1;i>=0;i--)
  {
      for(int j=0;j<n-i;j++)
      {
          arr[i].push_back(num++);
      }
  }
    for (int i = 0; i < n; i++) {
        for (int ch = 0; ch < (i * 2);
             ch++) {
            cout << ' ';
        }
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j];
            if (j != arr[i].size() - 1) {
                cout << '*';
            }
        }
        cout << endl;
    }
}
int main()
{
    int N = 3;
    print(N);
    return 0;
}
