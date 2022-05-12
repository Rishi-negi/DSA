void merge(int input[] , int si , int ei , int mid){
    
    int len=ei-si+1;
    int arr[len];
    int cmp1=si , cmp2=mid+1;
   int k=0;
    // for(int k=0 ; k<len ; k++){
    while(cmp1<=mid && cmp2<=ei){
        if(input[cmp1] > input[cmp2]){
            arr[k]=input[cmp2];
            cmp2++;
        }
        else{
            arr[k]=input[cmp1];
            cmp1++;
        }
        k++;
    }
    while(cmp1<=mid){
        arr[k]=input[cmp1];
            cmp1++;
        k++;
    }
    while(cmp2<=ei){
        arr[k]=input[cmp2];
            cmp2++;
        k++;
    }
    
    for(int l=0 , m=si ; l< len; l++ , m++)
           input[m] = arr[l];
        
}

void sort(int input[] , int si , int ei){
   
    if(si>=ei)
        return;
    
    int mid = (si+ei)/2;
    
    sort(input , si , mid);
    sort(input , mid+1 , ei);
    
    merge(input , si , ei , mid);
}

void mergeSort(int input[], int size){

    int i=0 , j=size-1;
    sort(input , i , j);
    return;
}