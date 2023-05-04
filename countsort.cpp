#include <bits/stdc++.h>
using namespace std;
int main()
{

    //  int n;
    //  cin>>n;
    //  int arr[n];
    //  for(int i=1;i<=n;i++)cin>>arr[i];

    //  //find max element in array for count array size
    //  int max=INT_MIN;
    //  for(int i=1;i<=n;i++)if(arr[i]>max)max=arr[i];

    //  int arr2[max];
    //  for(int i=1;i<=max;i++)arr2[i]=0;

    //  for(int i=1;i<=n;i++)
    //  {
    //     arr2[arr[i]]++;
    //  }

    //  for(int i=2;i<max+1;i++)arr2[i]+=arr2[i-1];

    //  int arr3[n];

    //  for(int i=n;i>0;i--)
    //  {
    //      arr3[arr2[arr[i]]]=arr[i];
    //      arr2[arr[i]]--;
    //  }
    //  for(int i=1;i<=n;i++)cout<<arr3[i]<<" ";

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    int arr2[max + 1] = {0};
    for (int i = 0; i < n; i++)
        arr2[arr[i]]++;

    for (int i = 1; i < max + 1; i++)
        arr2[i] += arr2[i - 1];

    int arr3[n];
    for (int i = n - 1; i >= 0; i--)
    {
        arr3[--arr2[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
        cout << arr3[i] << " ";

    return 0;
}
