#include<bits/stdc++.h>
using namespace std;
void intersection(int *arr1, int *arr2, int s1, int s2)
{
    for(int i=0 ; i<s1 ; i++){
    
	    for(int j=0 ; j<s2 ; j++){
	
			if(arr1[i]==arr2[j]){
		       
				cout<<arr1[i]<<" ";
				arr2[j]=INT16_MIN;
				break;
			}
		}       
	}
}