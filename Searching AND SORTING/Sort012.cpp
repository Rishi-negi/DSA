void sort012(int *arr, int n)
{
     int i=0;
 int new_arr[n];
 int j=0,k=n-1;    
   
    while (i<n)
    {
        if(arr[i]==0){
            new_arr[j]=arr[i];
            j++;
            i++;
        }
        else if (arr[i]==2){
            new_arr[k]=arr[i];
            k--;
            i++;
        }
        else
            i++;
    }

    for(int x=j ; x<=k ; x++){
        new_arr[x]=1;
    }
   
    for(int x=0 ; x<n; x++){
        arr[x]=new_arr[x];
    }
    
}