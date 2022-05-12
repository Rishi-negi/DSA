int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(x==0 && n!=0)
         return 0;
    //base condition
    if(n==0 )
         return 1;
     
    //hypothesis for n-1
    int smallop= power(x,n-1);
    //prove for n
    int op= x * smallop;
    return op;

}