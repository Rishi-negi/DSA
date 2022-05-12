void trimSpaces(char input[]) {
    // Write your code here
    int count=0;
    for(int i=0 ; i<strlen(input) ; i++){
        
           if(input[i]==32){
                   for(int k=i; k<strlen(input) ; k++){
                             if(input[i]==32);
                                       count++;
                   }
                   
                   for(int j=i ; j<=count+i ; j++){
                              input[j]=input[j+1];
                   }
               i--;
           }
           
           
           else
               continue;
    }
}