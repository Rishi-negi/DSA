int duplicateNumber(int *arr, int size)
{
    int i=0, duplicate ;
    while(i<size){
        int count=0;
        duplicate=arr[i];
        
        for(int j=0 ; j<size ; j++){
            
            if(arr[j]==arr[i])
                  count++;
               
        }
        if(count==2)
            break;
        
      i++;
    }
   return duplicate;
}