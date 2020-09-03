#include<bits/stdc++.h>
using namespace std;
void search(int arr[4][4],int n, int ele)
{
    int i=n-1,j=0;
        while(i>=0 && j<n)
        {
            if(arr[i][j]==ele)
            {
                cout<<"Element found at location ("<<i<<","<<j<<")"<<endl;
                return;
            }
            else if(arr[i][j]>ele)
                i--;
            else
                j++;
        }
    cout<<"Element not preset in the matrix"<<endl;
}
int main() 
{ 
    int mat[4][4] = { { 10, 20, 30, 40 }, 
                      { 15, 25, 35, 45 }, 
                      { 27, 29, 37, 48 }, 
                      { 32, 33, 39, 50 } }; 
    search(mat, 4, 29); 
  
    return 0; 
} 
