#include<iostream>
using namespace std;

void sortwave(int arr[],int n)
{
    int temp;
for(int i=0;i<n;i+=2)
{
    if(i<n-1 && arr[i]<arr[i+1])
    {
     temp=arr[i+1];
     arr[i+1]=arr[i];
     arr[i]=temp;
    }
    if(i>0 && arr[i-1]>arr[i])
    {
        temp=arr[i-1];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
}
}
int main()
{
    int n;

    cout<<"Enter the size of the array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number :";
        cin>>arr[i];
    }
    sortwave(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}