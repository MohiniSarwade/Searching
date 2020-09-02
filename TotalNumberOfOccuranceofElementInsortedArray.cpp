#include<bits/stdc++.h>
using namespace std;
int searchL(int a[],int low,int high,int data)
{
    if(high>=low)
    {
        int mid=low+(high-low)/2;
        if((mid==high && a[mid]==data)||(a[mid]==data && a[mid+1]>data))
            return mid;
        else if(a[mid]>data)
            return searchL(a,low,mid-1,data);
        else
            return searchL(a,mid+1,high,data);
    }    
    return -1;
}
int searchF(int a[], int low, int high, int data)
{
    if(high>=low)
    {
        int mid=low+(high-low)/2;
        if((mid==low && a[mid]==data)||(a[mid]==data && a[mid-1]<data))
            return mid;
        else if(a[mid]>=data)
            return searchF(a, low, mid-1,data);
        else
           return searchF(a,mid+1,high,data);
    }
    return -1;
}
int TotalCount(int arr[], int low, int high, int data)
{
    int leftcount=searchF(arr,low, high,data);
    int rightcount=searchL(arr,low,high,data);
    return rightcount-leftcount+1;
}
int main()
{
    int n=12;
    int arr[n]={1,2,3,4,5,5,5,6,7,7,8,8};
    int x=TotalCount(arr,0,n-1,5);
    
    cout<<"Total occuerance of numbber is "<<x<<endl;
    return 0;
} 
