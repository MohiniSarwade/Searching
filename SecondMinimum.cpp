#include<bits/stdc++.h>
using namespace std;
void print2Smallest(int arr[],int n)
{
    if(n<2)
    {
        cout<<"Invalid input";
        return;
    }
    int first=INT_MAX,second=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second && arr[i]!=first)
            second=arr[i];
    }
    if(second==INT_MAX)
        cout<<"Second Min des not exist";
    else
        cout<<"First Min: "<<first<<endl<<"Second Min: "<<second<<endl;
}
int main()  
{  
    int arr[] = {12, 13, 1, 10, 34, 1};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    print2Smallest(arr, n);  
    return 0;  
}  
  
