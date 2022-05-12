#include<cmath>
#include<cstring>
//helper function 
void strToInt(char input[] , int &num , int &i , int &j){
    if(input[i]=='\0')
        return;
   
    num= num + ( (input[i]-48) * pow(10,j) );
    i++;
    j--;
    
    strToInt(input , num , i, j);
    return;
}

int stringToNumber(char input[]) {
    // Write your code here
    int i=0;
    int j=strlen(input)-1;
    int num=0;
    strToInt(input , num , i, j);
    return num;
}


