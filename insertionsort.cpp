#include<bits/stdc++.h>
using namespace std;
//insertion sort
int main(){
 
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
     
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];

  for(int i=1;i<n;i++)
  {
      int j=i;
      while(arr[j]<arr[j-1] )
      {
          swap(arr[j],arr[j-1]);
          j--;
      }

  }  
  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
     
return 0;
}