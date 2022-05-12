void removeConsecutiveDuplicates(char str[]) {
    int arr[strlen(str)];
    int orig=str[0];
    arr[0]=str[0];
    int k=1;
    for(int j=1 ; str[j]!='\0'; j++){
           if(orig==str[j]){
                continue;
           }
           else{
               orig=str[j];
               arr[k]=str[j];
               k++;
           }
    }
    arr[k]='\0';
    int i;
    for (i = 0; arr[i]!='\0' ; i++)
    {
        str[i]=arr[i];
    }
     str[i]='\0';  
}