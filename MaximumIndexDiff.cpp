#include<bits/stdc++.h>
using namespace std;
void maxIndexDiff(int arr[],int n)
{
    int leftArr[n],rightArr[n];
    leftArr[0]=arr[0],rightArr[n-1]=arr[n-1];
    for(int i=1;i<n;i++)
        leftArr[i]=min(arr[i],leftArr[i-1]);
    for(int j=n-2;j>=0;j--)
        rightArr[j]=max(arr[j],rightArr[j+1]);
    int i=0,j=0,maxdiff=-1;
    while(j<n && i<n)
    {
        if(leftArr[i]<rightArr[j])
        {
            maxdiff=max(maxdiff,j-i);
            j++;
        }
        else
            i++;
    }
    cout<<"Maximum difference "<<maxdiff<<endl;
}
int main()
{
    int n=9;
    int arr[n]={34,8,10,3,2,80,30,33,1};
    maxIndexDiff(arr,n);
    return 0;
}
