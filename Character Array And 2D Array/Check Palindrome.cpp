bool checkPalindrome(char str[]) {
    // Write your code here
    int i,ispal;
    int len=strlen(str);
    if(strlen(str)==1)
         return true;
    else{
         for(i=0 ; i<len/2 ; i++){
         
                  if( str[i] == str[len-i-1] ){
                      ispal=1;
                      continue;
                  }         
                  else{
                      ispal=0;
                       break;
                  }   
        }
        
        if(ispal==1)
              return true;
        else 
              return false;
    }
    
}
