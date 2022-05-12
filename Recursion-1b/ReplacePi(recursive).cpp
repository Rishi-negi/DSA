#include<cstring>
void placePi(char input[] , int &i , int &j){
    if(input[i]=='\0')
       return;
    
    if(input[i]=='p'&& input[i+1]=='i'){
        for (int k = j; k>=i; k--)
            input[k+2]=input[k];
        
        input[i++]='3';
        input[i++]='.';
        input[i++]='1';
        input[i]='4';
        j=j+2;
    }
    i++;

    placePi(input , i , j);
}
void replacePi(char input[]) {
	// Write your code here
    int i=0;
    int j=strlen(input);
    placePi(input , i , j);
}
