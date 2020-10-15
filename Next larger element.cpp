#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void nextLarger(long long int a[], int n)
{
    stack<long long int>s;
    vector<long long int>v(n,0);
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
            v[i]=-1;
        else if(s.size()>0 && s.top()>a[i])
            v[i]=s.top();
        else if(s.size()>0 && s.top()<=a[i])
        {
            while(s.size()>0 && s.top()<=a[i])
            {
                s.pop();
            }
            if(s.size()==0)
                v[i]=-1;
            else
                v[i]=s.top();
        }
        
        s.push(a[i]);
    }
    
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
   
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   
	   nextLarger(a,n);
	    cout<<endl;
	}
	return 0;
}
