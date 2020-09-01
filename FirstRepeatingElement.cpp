#include<bits/stdc++.h>
using namespace std;
void FirstRepeat(int arr[],int n)
{
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       if(mp.find(arr[i])!=mp.end())
       {
           if(mp[arr[i]]>0)
                mp[arr[i]]*=-1;
       }
       else
       {
           mp[arr[i]]=i+1;
       }
   }
   
   
     int max=INT_MIN;
     int ele;
   for(int i=0;i<n;i++)
   {
      if(mp[arr[i]]<0 && mp[arr[i]]>max)
       {
           max=mp[arr[i]];
           ele=arr[i];
       }
   }
   cout<<"Element first repeated is "<<ele<<endl;
}
int main()
{
    int n=7;
    int arr[n]={3,5,1,5,7,3,6};
    FirstRepeat(arr, n);
    return 0;
    
}
