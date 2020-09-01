#include<bits/stdc++.h>
using namespace std;
void findDuplicate(int arr[], int n)
{
    map<int,int>mp;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(arr[i])!=mp.end())
        {
            cout<<"Duplicate found "<<arr[i]<<" at index "<<i<<endl;
            return;
        }
        else
            mp[arr[i]]=count++;
    }
    cout<<"No duplicate"<<endl;
}
void NegateArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])]<0)
        {    
            cout<<"Duplicate found "<<abs(arr[i])<<" at position "<<i<<endl;
            return;
        }
        else
            arr[abs(arr[i])]*=-1;
    }
    cout<<"No duplicate"<<endl;
}

int main()
{
    int n=5;
    int arr[n]={3,2,1,4,3};
    findDuplicate(arr,n);
    NegateArr(arr,n);
    return 0;
    
}
