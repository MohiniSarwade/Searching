#include<bits/stdc++.h>
using namespace std;

//Elements are in range of  1-n; total n-1 Elements.
void MissingEle(int arr[],int n)
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        x^=arr[i];
    }
    for(int i=1;i<=n+1;i++)
        x^=i;
   
   cout<<"Missing element is "<<x<<endl;
}
int main()
{
    int n=7;
    int arr[n]={1,2,4,6,3,8,7};
    MissingEle(arr, n);
    return 0;
    
}
