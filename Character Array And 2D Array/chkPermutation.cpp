bool isPermutation(char str1[], char str2[]) {
    
    if( strlen(str1)!= strlen(str2) )
          return false;
    int arr[26]={0};
    
    for (int i = 0; str1[i]; i++)
    {
        int temp = str1[i] - 'a';  
        arr[temp]++;
    }
    for (int i = 0; str1[i]; i++)
    {

        int temp = str2[i] - 'a';  
        arr[temp]--;
    }
    
    for(int i=0; i<26; i++){
        if(arr[i] != 0)
            return false;
    }
    return true;
}