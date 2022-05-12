void arrange(int *arr, int n)
{
    //Write your code here
    int i=0 , j=n-1 , x=1;
    
	while (i < j)
	{
       arr[i]=x;
	   x++;

       arr[j]=x;
	   x++;
    
	  i++;
	  j--;
	}
    
	if(i==j)
	   arr[i]=x;
    
}