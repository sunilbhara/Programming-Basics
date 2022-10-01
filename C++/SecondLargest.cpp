#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n);

int secondLargest(int arr[], int n)
{
    int largest = getLargest(arr,n);
    cout<<"First largest element is: "<<arr[largest]<<endl;
    int secondLarge = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(secondLarge==-1)
                secondLarge = i;
            else if(arr[i]>arr[secondLarge])
                secondLarge = i;

        }
    }
    return secondLarge;
}

int getLargest(int arr[],int n)
{
    int largest = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[largest]<arr[i])
            largest = i;
    }
    return largest;
}

int main()
{
    int n;
    cout<<"Please enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ansIndex = secondLargest(arr,n);
    cout<<"Second largest element is: "<<arr[ansIndex]<<endl;
    
    return 0;
}