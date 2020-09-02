#include<bits/stdc++.h>
using namespace std;
int search(int a[],int low,int high,int data)
{
    if(high>=low)
    {
        int mid=low+(high-low)/2;
        if((mid==high && a[mid]==data)||(a[mid]==data && a[mid+1]>data))
            return mid;
        else if(a[mid]>data)
            return search(a,low,mid-1,data);
        else
            return search(a,mid+1,high,data);
    }    
    return -1;
}

int main()
{
    int n=12;
    int arr[n]={1,2,3,4,5,5,5,6,7,7,8,8};
    int x=search(arr,0,n-1,5);
    if(x==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Elemnet found at index "<<x<<endl;
    return 0;
} #include<bits/stdc++.h>
using namespace std;
int search(int a[],int low,int high,int data)
{
    if(high>=low)
    {
        int mid=low+(high-low)/2;
        if((mid==high && a[mid]==data)||(a[mid]==data && a[mid+1]>data))
            return mid;
        else if(a[mid]>data)
            return search(a,low,mid-1,data);
        else
            return search(a,mid+1,high,data);
    }    
    return -1;
}

int main()
{
    int n=12;
    int arr[n]={1,2,3,4,5,5,5,6,7,7,8,8};
    int x=search(arr,0,n-1,5);
    if(x==-1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Elemnet found at index "<<x<<endl;
    return 0;
} 
