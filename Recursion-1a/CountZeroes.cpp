//Using {Helper Function} approach
void findZero(int n , int &k){
    //base case 
    if(n==0){
       return;
    }    

    //some calc   
    if(n%10==0){
        k++;
    }

    //recursive call 
    findZero(n/10 , k);
}

int countZeros(int n){
  int k=0;
  
  if(n==0)
       return 1;
  else
      findZero(n,k);
  
    return k;
}
