#include<bits/stdc++.h>
using namespace std;

//All Elements are positive and less than n;
void maxIndexDiff(int arr[],int n)
{
    int i=0;
    while(i<n)
    {
        int expt=arr[i]-1;
        if(arr[i]>0 && arr[expt]>0)
        {
            swap(arr[i],arr[expt]);
            arr[expt]=-1;
        }
        else if(arr[i]>0)
        {
            arr[expt]--;
            arr[i]=0;
            i++;
        }
        else
            i++;
    }
    for(i=0;i<n-1;i++)
        cout<<i+1<<":"<<abs(arr[i])<<endl;
}
int main()
{
    int n=11;
    int arr[n]={10,10,9,4,7,6,5,2,3,2,1};
    maxIndexDiff(arr,n);
    return 0;
}
