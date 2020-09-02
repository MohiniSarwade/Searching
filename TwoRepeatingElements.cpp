#include<bits/stdc++.h>
using namespace std;

void printRepeating(int arr[], int size)
{
    int n=size-2;
    int x=0,y=0;
    int setBitNo,Xor=0;
    
    for(int i=0;i<size;i++)
    {
        Xor^=arr[i];
    }
    for(int i=1;i<=n;i++)
        Xor^=i;
    setBitNo=Xor&~(Xor-1);
    for(int i=0;i<size;i++)
    {
        if(arr[i]&setBitNo)
            x=x^arr[i];
        else
            y=y^arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(i&setBitNo)
            x=x^i;
        else
            y=y^i;
    }
    cout<<x<<" "<<y<<endl;
}

int main()  
{  
    int arr[] = {4, 2, 4, 5, 2, 3, 1};  
    int arr_size = sizeof(arr)/sizeof(arr[0]);  
    printRepeating(arr, arr_size);  
    return 0;  
} 
