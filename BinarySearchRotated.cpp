#include<bits/stdc++.h>
using namespace std;
int search(int a[],int low,int high,int data)
{
    int mid=low+(high-low)/2;
    if(low>high)
        return -1;
    if(a[mid]==data)
        return mid;
    else if(a[low]<=a[mid])
    {
        if(data>=a[low] && data<a[mid])
            return search(a,low,mid-1,data);
        else
            return search(a,mid+1,high,data);
    }
    else
    {
        if(data>a[mid] && data<=a[high])
            return search(a,mid+1,high,data);
        else
            return search(a,low,mid-1,data);
    }
    
}

int main()
{
    int n=12;
    int arr[n]={15,16,19,20,25,1,3,4,5,7,10,14};
    int x=search(arr,0,n-1,5);
    if(x==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Elemnet found at index"<<x<<endl;
    return 0;
} 
