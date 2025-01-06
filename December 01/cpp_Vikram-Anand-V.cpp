#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of the array :";
    cin>>n;

   int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value :";
        cin>>arr[i];
    }

int missing_no;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
         missing_no=i+1;
         break;
        }
    }

    cout<<missing_no<<endl;


    return 0;
}