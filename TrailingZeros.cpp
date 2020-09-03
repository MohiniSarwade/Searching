#include<bits/stdc++.h>
using namespace std;
void TrailingZeros(int n)
{
    int i,count=0;
    if(n<0)
        return;
    for(i=5;n/i>0;i*=5)
    {
        count+=n/i;
    }
    cout<<"Trialing zeros "<<count<<endl;
}
int main() 
{ 
    int n=12;
    TrailingZeros(n); 
  
    return 0; 
} 
