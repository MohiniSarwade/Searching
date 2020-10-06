class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int larr[n];
        int rarr[n];
        larr[0]=arr[0];
        for(int i=1;i<n;i++)
            larr[i]=min(arr[i],larr[i-1]);
        rarr[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
            rarr[i]=max(arr[i],rarr[i+1]);
        
        int maxd=-1;
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(larr[i]<=rarr[j])
            {
                maxd=max(maxd,j-i);
                j++;
            }
            else
                i++;
        }
            
        return maxd;   
    }

};
