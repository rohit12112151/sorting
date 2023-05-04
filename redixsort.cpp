#include<bits/stdc++.h>
using namespace std;
int main(){
 
   int n;
   cin>>n;
   int arr[n];
   for(int i=1;i<=n;i++)cin>>arr[i];

  int max=0;
  for(int i=1;i<=n;i++)if(arr[i]>max)max=arr[i];

  int digit=0;
  while(max)
  {
    digit++;
    max/=10;
  }

   

        int arr3[n];
        int x=10,y=1;

     while(digit--)
     {
        int arr2[10]={0};

        for(int i=1;i<=n;i++)arr2[(arr[i]%x)/y]++;

        for(int i=1;i<10;i++)arr2[i]+=arr2[i-1];
        
        for(int i=n;i>0;i--)
        {
            arr3[arr2[(arr[i]%x)/y]]=arr[i];arr2[(arr[i]%x)/y]--;
        }


        for(int i=1;i<=n;i++)arr[i]=arr3[i];
        x*=10;
        y*=10;
     }

    for(int i=1;i<=n;i++)cout<<arr3[i]<<" ";
     
return 0;
}