
//Slightly high running time
// void removeAllOccurrencesOfChar(char input[], char c) {
//     char str[strlen(input)];
//     int i, j;
//     for(i=0,j=0 ; i< strlen(str) ; i++){
//         if(input[i]!=c){
//             str[j]=input[i];
//             j++;

//         }
//         else 
//            continue;
//     }
//     int k;
//     for( k=0 ; k<= strlen(str) ; k++){
//         input[k]=str[k];
//     }
//     input[k]='\0';
// }

void removeAllOccurrencesOfChar(char input[], char c) {
int j=0;
    int i=0;
    int len=strlen(input);
    
    while(i<len){
        if(input[i]!=c){
            swap(input[i],input[j]);
            i++;
            j++;
        }
        else{
            input[i]='\0';
            i++;
        }
    }
}