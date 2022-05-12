#include<bits/stdc++.h>
void sumOfTwoArrays(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int j=size1-1;
    int k=size2-1;
    int carry=0;
     for(int i=max(size1,size2); i>=0 ; i--){
            int sum=0;
            int elem=0;

            if(j<0 && k>=0)
                 sum = 0 + arr2[k] + carry;

            else if(k<0 && j>=0)
                 sum = arr1[j] + 0 + carry;
            
            else if(k<0 && j<0){
                 sum=0+carry;         
            }
            else if(j>=0 && k>=0){
                 sum=arr1[j]+arr2[k]+carry;
            }

            if(sum>9){
                elem = sum%10;
                carry = sum/10;
            }
            else{
                elem=sum;
                carry=0;
            }

            arr3[i]=elem;
            //cout<<"Element at "<<i<<" :"<<arr3[i]<<endl;
            j--;
            k--;
    }
}