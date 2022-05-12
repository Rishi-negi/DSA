void fillIndexes(int input[], int size, int x, int output[],int currindex,int &k)
{
    if(currindex == size)
        return;

    
    if(input[currindex] == x)
    {
        
        output[k] = currindex;  
        k++;

    }
    
    fillIndexes(input,size,x,output,currindex+1,k);
    return ;
      // basically a for loop using recursion
}


int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
    int k=0; //to keep the size of output index
    fillIndexes(input,size,x,output,0,k);
    return k;

}