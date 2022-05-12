void sortZeroesAndOne(int *arr, int n)
{
   int count1=0, count2=0;
   for(int i=0 ; i<n ; i++){
       
       if(arr[i]==0)
           count1++;
       else
           count2++;
   } 
    for(int i=0 ; i<n ; i++){
        if(i<count1)
            arr[i]=0;
        else
            arr[i]=1;
    }
}