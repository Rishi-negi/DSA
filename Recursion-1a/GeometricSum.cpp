double geometricSum(int k) {
    
    //BASE CASE
    if(k==0)
        return 1;
    
    //RECURSIVE CALL
    
    double ans=geometricSum(k-1);
    //SMALL CALCULATION
    return 1/pow(2,k) + ans;
}
