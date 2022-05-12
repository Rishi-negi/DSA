#include<iostream>
using namespace std;

int main(){
    int m,n;
    //cin>>m>>n;
    int a[1000][1000];
    
    cin>>m>>n;
    for (int i = 0; i <m ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    
    
    for (int j = 0; j <n ; j++)
    {
        int sum=0;
        for (int i = 0; i < m; i++)
        {
            sum=sum+a[i][j];
        }
        cout<<sum<<" ";
    }  
}

