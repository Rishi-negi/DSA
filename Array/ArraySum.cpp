#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    //cout<<"enter size :";
    cin>>n;
    int arr[n];
    //cout<<"enter array elements :";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //cout<<" ";
    }
    
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    cout<<sum;
    return 0;
}
