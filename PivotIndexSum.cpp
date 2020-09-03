#include<bits/stdc++.h>
using namespace std;

//All Elements are positive and less than n;
void maxIndexDiff(int arr[],int n)
{
    int maxSum=0;
    for(int i=0;i<n;i++)
        maxSum+=arr[i];
    int leftSum=0;
    for(int i=0;i<n;i++)
    {
        if(leftSum==(maxSum-leftSum-arr[i]))
        {
            cout<<"pivot Element is "<<arr[i]<<" at index "<<i<<endl;
            return;
        }
        leftSum+=arr[i];
    }
}
int main()
{
    int n=6;
    int arr[n]={1,8,4,7,6,7};
    maxIndexDiff(arr,n);
    return 0;
}
