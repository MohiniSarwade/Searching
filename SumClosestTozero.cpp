#include<bits/stdc++.h>
using namespace std;
//using map o(n) space o(n);
void closestSumToZero(int arr[], int n)
{
    sort(arr, arr+n);
    int i=0,j=n-1,min_p=INT_MAX,max_n=INT_MIN;
    while(i<j)
    {
        int sum=arr[i]+arr[j];
        if(sum>0)
        {
            if(sum<min_p)
                min_p=sum;
            j--;
        }
        else if(sum<0)
        {
            if(sum>max_n)
                max_n=sum;
            i++;
        }
        else cout<<"Minimum sum closest to zero is "<<sum<<endl;
    }
    cout<<"Minimum sum closest to zero is "<<min(min_p,abs(max_n))<<endl;
}

int main()
{
    int n=6;
    int arr[n]={1,60,-10,70,-80,85};
    closestSumToZero(arr,n);

    return 0;
}
