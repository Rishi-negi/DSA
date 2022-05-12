#include<string.h>
void revStr(char arr[] , int start , int end){
        while (start < end)
        {
                int temp = arr[end];
                arr[end] = arr[start];
                arr[start] = temp;
                start++ , end--;
        }
}
void reverseStringWordWise(char arr[]) {
    int len=strlen(arr);
    int j=len-1;
    int i=0;
    
    revStr(arr , i , j );
    int start=0, end;
    for(int k=0 ; k<=len ; k++){
            if(arr[k]==' ' ||  arr[k]=='\0'){
                end=k-1;
                revStr(arr , start , end );
                start=k+1;
            }       
    }
}
