#include<bits/stdc++.h>
using namespace std;

vector<int>stockStrategy(int a[], int l, int r)
{
    vector<int>v(3,0);
    int min=a[0];
    int maxDiff=a[1]-a[0];
    for(int i=l+1;i<=r;i++)
    {
        if((a[i]-min)>maxDiff)
        {
            maxDiff=a[i]-min;
            v[0]=maxDiff;
            v[1]=a[i];
            v[2]=min;
        }
        if(a[i]<min)
        {
            min=a[i];
            v[2]=min;
        }
    }
    return v;
}

int main() 
{ 
    int arr[] = {80, 2, 6, 3, 100}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    vector<int>v;
    v=stockStrategy(arr,0,n-1);
    cout<<"Profit "<<v[0]<<endl;
    cout<<"Buy day "<<v[1]<<endl;
    cout<<"Sell day "<<v[2]<<endl;
    
    return 0;
}
