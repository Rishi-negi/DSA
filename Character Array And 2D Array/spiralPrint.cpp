void spiralPrint(int **input, int nRows, int nCols)
{
   int count=0;
    int cs=0 , ce=nCols-1;
    int rs=0 , re=nRows-1;
    while (count<nCols*nRows)
    {
            //traversing Column(CS-->CE)
            for (int i = cs; i <= ce; i++){
                cout<<input[rs][i]<<" ";
                count++;
            }
            rs++;

            //Traversing Rows(RS-->RE)
            for (int i = rs; i <= re; i++){
                cout<<input[i][ce]<<" ";
                count++;
            }
            ce--;
            
           
            //Traversing Column backwards(CE-->CS)
            for (int i = ce; i >= cs; i--){
                cout<<input[re][i]<<" ";
                count++;
            }
            re--;

            //Traversing Rows backward(RE-->RS)
            for (int i = re; i >= rs; i--){
                cout<<input[i][cs]<<" ";
                count++;
            }
            cs++;
    }
}