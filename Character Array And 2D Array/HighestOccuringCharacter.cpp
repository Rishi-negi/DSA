// char highestOccurringChar(char str[]) {
//     // Write your code here
//     int arr[256]={0};
//     int ch;
//     for(int i=0 ; i<strlen(str) ; i++){
//          int temp=str[i]-'a';
//          arr[temp]++;
//     }
//     int max=INT16_MIN;
//     for(int i=0 ; i<256 ; i++){
//           if(arr[i]>max){
//               max=arr[i];
//               ch=i;
//           }
//     }
    
//     return ch;
// }

char highestOccurringChar(char input[]) {
    int arr[256]={0};
    int maxFreq=0;
    
    for(int i=0;input[i]!='\0';i++){
        arr[int(input[i])-'a']+=1;
        maxFreq=max(maxFreq,arr[int(input[i])-'a']);
    }
    
    char ans;
    
    for(int i=0;input[i]!='\0';i++){
        if(arr[int(input[i])-'a']==maxFreq){
            ans=input[i];
            break;
        }
    }
    
    return ans;
}