#include<bits/stdc++.h>
using namespace std;

//heap sort;

void heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(arr[l]<arr[largest] && l<n)largest=l;
    if(arr[r]<arr[largest] && r<n)largest=r;

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}


void heapsort(int arr[],int n)
{
         for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--)
    {

        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}

int main(){
 
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    //  heapsort(arr,n);
          for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
     for(int i=0;i<n;i++)cout<<arr[i]<<" ";
return 0;
}







//selection sort
/*
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
    int small=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[small])
            {
                small=j;
            }
            swap(arr[i],arr[small]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
*/





