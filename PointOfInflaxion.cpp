#include<bits/stdc++.h>
using namespace std;

void search(int arr[], int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        if(low==high)
        {
            cout<<"F"<<arr[low]<<endl;
            return;
        }
        else if(low==high-1)
        {
            cout<<"S"<<max(arr[low],arr[high]);
            return;
        }
        else
        {
            int mid=low+(high-low)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
            {
                cout<<arr[mid]<<endl;
                return;
            }
            else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1])
                low=mid+1;
            else if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1])
                high=mid-1;
            else 
            {
                cout<<INT_MIN;
                return;
            }
        }
            
    }
}
int main()
{
    int n=6;
    int arr[n]={-5,-3,4,3,2,1};
    search(arr,n);
    return 0;
}
