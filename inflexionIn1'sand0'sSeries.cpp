#include<bits/stdc++.h>
using namespace std;
int search(int a[],int low,int high)
{
    
    int mid=low+(high-low)/2;
    if(a[mid]!=a[mid+1])
        return mid+1;
    else if(a[mid]==a[mid+1] && a[mid]==1)
        return search(a,mid+1,2*high);
    else if(a[mid]==a[mid+1] && a[mid]==0)
        return search(a,low, mid);
    else
        return -1;
}

int main()
{
    int arr[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int x=search(arr,0,1);
        
    cout<<x<<endl;
    return 0;
}
