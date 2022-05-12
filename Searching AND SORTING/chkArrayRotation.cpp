int arrayRotateCheck(int *arr, int size)
{
    //Write your code here
    int k=0;
    int min=arr[0];
    for(int i=1; i<size; i++)
    {
             if( min > arr[i] )
                       min=arr[i];
    }
 
    for(int i=0 ; i<size-1; i++)
    {
             if(arr[i]==min)
                       break;       
             else
                       k++;    
    }
 
    return k;
}