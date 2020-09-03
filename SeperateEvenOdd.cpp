#include<bits/stdc++.h>
using namespace std;
void seperate(int arr[],int n)
{
    int left=0,right=n-1;
    while(left<right)
    {
        while(arr[left]%2==0 && left<right)
            left++;
        while(arr[right]%2==1 && left<right)
            right--;
        if(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main() 
{ 
    int n=7;
    int arr[n]={12,34,45,9,8,90,3};
    seperate(arr,n); 
  
    return 0; 
} 
