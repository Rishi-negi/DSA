int findUnique(int *arr, int size)
{
    //Write your code here
    int j=0,x;
    while(j<size){
        int count=0;
        x=arr[j];
        
        for(int i=0 ; i<size-1 ; i++){
            if(x==arr[i])
                count++;
        }
        
        if(count==1)
            break;
        
        j++;
    }
    return x;
}