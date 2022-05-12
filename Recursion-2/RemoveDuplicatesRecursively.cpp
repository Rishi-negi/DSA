#include<cstring>
void remDupli(char input[] , int &i , int &j){
    if(input[i]=='\0')
        return;

     if(input[i]==input[j]){
         
         for(int k=j ; k<=strlen(input) ; k++)
             input[k-1]=input[k];
     }
    else{
        i++ , j++;
    }
     
    
    remDupli(input , i , j);
}

void removeConsecutiveDuplicates(char *input) {
	
     int i=0 , j=1;
    remDupli(input , i , j);
    return;

}