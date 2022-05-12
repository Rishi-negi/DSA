int binarySearch(int *arr, int n, int x)
{
    int l=0 , r=n-1;

    while(l<=r){
        
        int mid=(l+r)/2;

        if(arr[mid]==x)
            return mid;
        
        if(arr[mid]>x)
            r=mid-1;
        else
           l=mid+1;

    }
    return -1;
}