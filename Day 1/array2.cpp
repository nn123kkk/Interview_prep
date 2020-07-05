#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {1,0,2,1,0,1,2,0,1,2,0,1,1,1,0,2,0,2,2,0,1,2};
  int N = sizeof(arr)/sizeof(arr[0]);
  int cnt[3]={0};
  for(int i=0;i<N;i++)
    cnt[arr[i]]++; 
    
  for(int i=0;i<3;i++)
    for(int j=0;j<cnt[i];j++)
      cout<<i<<" ";
  return 0;
}
