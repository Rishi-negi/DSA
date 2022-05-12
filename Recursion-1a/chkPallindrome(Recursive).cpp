#include<cstring>
//Recieving c as a reference variable 
void chk(char input[] , int &i , int &j , bool &c){
    //base case
    if(i>j)
       return;
    //some calc
    if(input[i]==input[j]){
        i++;
        j--;
        c=true;
    }
    else{ 
       c=false;
       return;
    }

    //Recursive call 
    chk(input , i , j , c);
}

bool checkPalindrome(char input[]) {
    // Write your code here
    int i=0;
    int j=strlen(input)-1;
    bool c;
    chk(input , i , j , c);
    return c;
}