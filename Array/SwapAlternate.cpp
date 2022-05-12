void swapAlternate(int *arr, int size)
{
    //Write your code here
    int i=0, j=i+1 , temp;
    while(i<size && j<size){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i+=2;
        j+=2;
    }     
}