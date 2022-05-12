void pushZeroesEnd(int *arr, int n)
{
    int i=0;
 int new_arr[n];
 int j=0,k=n-1;    
   
    while (i<n)
    {
        if(arr[i]!=0){
            new_arr[j]=arr[i];
            j++;
            i++;
        }
        else if (arr[i]==0){
            new_arr[k]=arr[i];
            k--;
            i++;
        }
    }

    for(int x=0 ; x<n; x++){
        arr[x]=new_arr[x];
    }
}