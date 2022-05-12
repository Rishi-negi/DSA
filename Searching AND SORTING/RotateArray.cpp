void rotate(int *arr, int d, int n)
{
    int sub_arr[d];
    
    int i=0;
    for( ;  i<d;  i++){
        sub_arr[i]=arr[i];
    }
    
    int j=0;
    for(  ;  i<n;  i++){
         arr[j]=arr[i];
         j++;
    }

    int k=0;
    for(  ;  k<d;  k++){
        arr[j]=sub_arr[k];
        j++;    
    }
}