// Change in the given string itself. So no need to return or print anything
void remove(char input[] , int &i , int &j){
    
    if(input[i]=='\0')
        return;
    
    
    if(input[i]=='x'){
        for(int a=i; input[a]!='\0' ; a++){
            //shifting by 1
            input[a]=input[a+1];
        }
    }
    else{
            i++;
            j++;
    }
    
    remove(input , i , j);
}

void removeX(char input[]) {
    // Write your code here
    int i=0;
    int j=i+1;
    remove(input , i , j);
    return ;
    

}