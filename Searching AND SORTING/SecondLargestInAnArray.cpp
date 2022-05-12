//#include<math.h>
int findSecondLargest(int *arr, int n)
{
    bool is_same=false;
    int count=1;
    for(int k=1;  k<n;  k++){
           if(arr[0]==arr[k])               
                is_same=true;
           else{
               is_same=false;
               break;
           }
    }
     
    if(n<=1 || is_same==true)
       return -2147483648;
    
    int max=arr[0];   
    for(int i=1;  i<n; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    
    int second_max=arr[0];
    for(int j=1;  j<n;  j++){
        if(arr[j]>second_max && arr[j]<max){
            second_max=arr[j];
        }
    }
    
    return second_max;
}