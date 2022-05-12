int tripletSum(int *arr, int s, int x)
{
	//Write your code here
    int count=0;
    for (int i = 0; i < s; i++)
    {
        for (int j = i+1; j < s; j++)
        {
            for (int k = j+1; k < s; k++)
            {
                if( x == arr[i] + arr[j] + arr[k] ){
                  count++;
                  //break;   
                }
            }   
        }
    }
    return count;
}