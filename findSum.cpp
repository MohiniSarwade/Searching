#include<bits/stdc++.h>
using namespace std;
//using map o(n) space o(n);
void findSum(int arr[], int n, int sum)
{
    map<int,int>mp;
    
    for(int i=0;i<n;i++)
    {
        if(mp.find(sum-arr[i])!=mp.end())
        {
            cout<<arr[i]<<" "<<sum-arr[i]<<endl;
            break;
        }
        else
            mp[arr[i]]=i;
    }
}
//using sorting o(nlogn)
void search(int arr[], int n, int sum)
{
    sort(arr, arr+n);
    int low,high;
    for(low=0,high=n-1;low<high;)
    {
        int k=arr[low]+arr[high];
        if(k==sum)
        {
            cout<<arr[low]<<" "<<arr[high]<<endl;
            return;
        }
        else if(k>sum)
            high--;
        else
            low++;
    }
    return;
}
int main()
{
    int n=5;
    int arr[n]={4,0,3,1,2};
    findSum(arr,n,6);
    
    search(arr,n,6);
    return 0;
}
