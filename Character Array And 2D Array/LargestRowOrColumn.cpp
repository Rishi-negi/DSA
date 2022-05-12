void findLargest(int **a, int nRows, int mCols)
{
    //row wise
    int lr_sum=INT32_MIN;
    int lr_index;
    for (int i = 0; i < nRows; i++)
    {
        int sum=0;
        for (int j = 0; j < mCols; j++)
        {
            sum=sum+a[i][j];
        }
        if(sum>lr_sum){
            lr_sum=sum;
            lr_index=i;
        }
    }
    
    //col wise 
    int lc_sum=INT32_MIN;
    int lc_index;
    for (int j = 0; j < mCols; j++)
    {
        int sum=0;
        for (int i = 0; i < nRows; i++)
        {
            sum=sum+a[i][j];
        }
        if(sum>lc_sum){
            lc_sum=sum;
            lc_index=j;
        }
    }
    
    (lr_sum >= lc_sum) ?  cout<<"row"<<" "<<lr_index<<" "<<lr_sum  :  cout<<"column"<<" "<<lc_index<<" "<<lc_sum ;
}