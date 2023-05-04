#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int r)
{
    int i=l+1,j=l;
    for(int i=l+1;i<=r;i++)
    {
        if(arr[i]<arr[l]){swap(arr[i],arr[++j]);}
    }
    swap(arr[j],arr[l]);
    return j;
}

void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);

    }
}

int main(){
 
     
     
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  quicksort(arr,0,n-1);  
  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
     
return 0;
}