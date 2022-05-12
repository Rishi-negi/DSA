#include<iostream>

using namespace std;
int main()
{
    int n, i,l, j;
    cin >> n;
    for(i=1; i <= n; i++)
    {
        for(int x = 0; x < n-i; x++)
        {
            cout << " ";
        }

        for(j=i; j < 2*i;j++)
        {
            cout <<j;
        }
        
        for(l=2*i-2;l>=i;l--){
            cout<<l;
        }

        cout<<endl;
    }
}