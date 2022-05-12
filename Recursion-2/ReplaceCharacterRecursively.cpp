//APPROACH 1 USING HELPER FUNCTION
/* void replaceCh(char input[] , char c1, char c2 , int &i){
      
      if(input[i]=='\0')
          return;
     
      if(input[i]==c1)
          input[i] = c2;
     
      i++;
     replaceCh(input , c1 , c2 , i);   
     return;
  }
  
  void replaceCharacter(char input[], char c1, char c2) {
       int k=0;
       replaceCh(input , c1 , c2 , k);
       return;
      
  }
*/
//APPROACH 2 WITHOUT USING HELPER FUNCTION
void replaceCharacter(char input[], char c1, char c2) {
     
    if(input[0]=='\0')
         return;
    
    if(input[0]==c1)
        input[0]=c2;
    
    
     replaceCharacter(input+1 , c1 , c2);
     return;
    
}