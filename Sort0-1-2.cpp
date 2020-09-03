#include<bits/stdc++.h>
using namespace std;
void seperate(int arr[],int n)
{
    int left=0,right=n-1,mid=left;
    while(mid<=right)
    {
        switch(arr[mid])
        {
            case 0:
                swap(arr[left],arr[mid]);
                left++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[right]);
                right--;
                break;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main() 
{ 
    int n=12;
    int arr[n]={0,1,1,0,1,2,1,2,0,0,0,1};
    seperate(arr,n); 
  
    return 0; 
} 
