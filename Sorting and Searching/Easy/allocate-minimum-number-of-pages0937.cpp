
class Solution 
{
    public:
   
     int func(int arr[],int n,int mid){
        int num=1,pages=0;
        for(int i=0;i<n;i++){
            if(pages+arr[i]<=mid) pages+=arr[i];
            else{
                num++;
                pages=arr[i];
            }
        }
        return num;
    }
    int findPages(int arr[], int n, int m) 
    {
        if(m>n) return -1;
        int low=*max_element(arr,arr+n),high=accumulate(arr,arr+n,0);
        while(low<=high){
            int mid=(low+high)/2;
            if(func(arr,n,mid)<=m) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};
