/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/
int partition(int input[] , int si , int ei){
    int x=input[si];
    int count=0;
    
    for(int i=si+1;i<=ei;i++)
        if(input[i]<=x)
            count++;
    int temp=input[si+count];
    input[si+count]=x;
    input[si]=temp;
    int ret=si+count;
    int i=si,j=ei;
    while(i<ret && j>ret)
    {
        if(input[i]<=x)
            i++;
        else if(input[j]>x)
            j--;
        else
        {
            int tem=input[j];
            input[j]=input[i];
            input[i]=tem;
           i++;
           j--;
        }
}
    return ret;
}


void qSort(int input[] , int si , int ei){
    if(si>=ei)
        return;
    
    int c = partition(input , si , ei);
    
    qSort(input , si , c-1);
    qSort(input , c+1 , ei);
}


void quickSort(int input[], int size) {
  
    int i=0 , j =size-1;
    qSort(input , i , j);
    return; 
}

