#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_Search(int arr[],int n, int x)
{
    int low=0,high=n-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int binaryS(int arr[],int low,int high,int x)
{
    int mid=low+(high-low)/2;
    if(low>high)
        return -1;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]<x)
        return binaryS(arr,mid+1,high,x);
    else
        return binaryS(arr,low,mid-1,x);
    return -1;
}
int main()
{
    int n=10;
    int arr[n]={0,3,7,8,23,34,66,77,87,99};
    cout<<"Iterative Solution"<<endl;
    int res=binary_Search(arr,n,87);
    if(res==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element fount at location "<<res<<endl;
    
    cout<<"Recursive solution"<<endl;
    int r=binaryS(arr,0,n-1,87);
    if(r==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element fount at location "<<r<<endl;
    
    return 0;
}
