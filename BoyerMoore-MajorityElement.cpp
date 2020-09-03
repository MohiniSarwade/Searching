#include<bits/stdc++.h>
using namespace std;
int findMajority(int arr[],int n)
{
    int ele=-1,count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            ele=arr[i];
            count=1;
        }
        else if(ele==arr[i])
            count++;
        else
            count--;
    }
    return ele;
}
bool isMajority(int arr[], int n, int ele)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
            count++;
    }
    if(count>(n/2))
        return true;
    else
        return false;
}
void PrintMajorityEle(int arr[], int n)
{
    int ele=findMajority(arr, n);
    if(isMajority(arr,n,ele))
        cout<<ele<<endl;
    else
        cout<<"No majority Element"<<endl;
}
int main()  
{  
    int arr[] = {2, 2, 2, 2, 5, 5, 2, 3, 3};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    PrintMajorityEle(arr, n);  
    return 0;  
}  
  
