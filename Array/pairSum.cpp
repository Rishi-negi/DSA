int pairSum(int *arr, int s, int x)
{
    int count=0;
    for(int i=0 ; i<s ; i++){
        for(int j=i+1 ; j<s; j++){

			if(arr[j]==x-arr[i]){
                count++;
                //continue;   
            }
		}       
	} 
    return count;           
}