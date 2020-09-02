#include<bits/stdc++.h>
using namespace std;

void tripletSum(int arr[], int n,int sum)
{
    sort(arr, arr+n);
    for(int k=0;k<n;k++)
    {
        for(int i=k+1,j=n-1;i<j;)
        {
            if(arr[k]+arr[i]+arr[j]==sum)
             {
                 cout<<"Items found "<<arr[k]<<" "<<arr[i]<<" "<<arr[j]<<endl;
                 return;
             }
            else if(arr[k]+arr[i]+arr[j]>sum)
                j--;
            else
                i++;
        }
    }
    cout<<"Items not found"<<endl;
    return;
}

int main()
{
    int n=6;
    int arr[n]={3,8,9,10,5,12};
    tripletSum(arr,n,31);
    return 0;
}
