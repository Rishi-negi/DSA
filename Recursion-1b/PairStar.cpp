#include<cstring>
void addStar(char input[] , int &i , int &j) {
    if(input[i]=='\0')
      return;
    
    if(input[i]==input[i+1]){
        int x;
        for (x = j; x >=i+1; x--){
            input[x+1]=input[x];
        }
        input[i+1]='*';
        i=i+1;
        j++;
    }
    i++; 
    addStar(input , i , j);
}

void pairStar(char input[]){
    int i=0;
    int j=strlen(input);
    addStar(input , i , j);
}