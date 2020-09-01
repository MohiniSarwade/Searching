#include<bits/stdc++.h>
using namespace std;
void MaxNo(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[arr[i]%n]+=n;
    }
    int max=0,maxIndex=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]/n>max)
        {
            max=arr[i]/n;
            maxIndex=i;
        }
        
    }
    cout<<"Element "<<maxIndex<<" appreared maximum number of times"<<endl;
}
int main()
{
    int n=7;
    int arr[n]={3,5,1,5,3,5,6};
    MaxNo(arr, n);
    return 0;
    
}
