#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int search(int a[], int low,int high, int x)
{
    if(low>high)
        return -1;
    
    int mid=(low+high)/2;
    if(a[mid]==x)
        return mid;
    if(a[mid]<=a[high])
    {
        if(x>=a[mid] && x<=a[high])
            return search(a,mid+1,high,x);
        else
            return search(a,low,mid-1,x);
    }
    else if(a[mid]>=a[low])
    {
        if(x>=a[low] && x<=a[mid])
            return search(a,low,mid-1,x);
        else
            return search(a,mid+1,high,x);   
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int x;
	    cin>>x;
	    cout<<search(a,0,n-1,x)<<endl;
	}
	return 0;
}
