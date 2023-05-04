#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    float data;
    node *next;

    node(float val)
    {
        data = val;
        next = NULL;
    }
};

void bucketsort(float arr[], int n)
{
    node *bucket[10] = {NULL};
    for (int i = 0; i < n; i++)
    {
        node *b = new node(arr[i]);

        if (bucket[(int)(arr[i] * 10)] == NULL)
            bucket[(int)(arr[i] * 10)] = b;
        else
        {
            node *prev = NULL;
            node *temp = bucket[(int)(arr[i] * 10)];
            if (temp->data < b->data && temp->next != NULL)
            {

                prev = temp;
                temp = temp->next;
            }

            if (prev == NULL)
            {
                b->next = temp;
                bucket[(int)(arr[i] * 10)] = b;
            }
            else
            {
                prev->next = b;
                b->next = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        node *temp = bucket[i];
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << " ";
    }
}

int main()
{

    int n;
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bucketsort(arr, n);

    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;

// class bucket{
//     public:
//     float barr[20]={0};
//     int size=0;
// };

// void bucketsort(float arr[],int n)
// {
//     bucket buk[10];
//     for(int i=0;i<n;i++)
//     {
//         if(buk[(int)(arr[i]*10)].size==0)
//         {
//             // static int size=0;
//             buk[(int)(arr[i]*10)].barr[size]=arr[i];

//         }
//     }

//     for(int i=0;i<10;i++)
//     {
//         for(int j=0;j<buk[(int)(arr[i]*10)].size;i++)cout<<buk[(int)(arr[i]*10)].barr[j];cout<<endl;
//     }
     
// }

// int main(){
 
//      int n;
//      cin>>n;
//      float arr[n];
//      for(int i=0;i<n;i++)cin>>arr[i];
//      bucketsort(arr,n);
// return 0;
// }