void print(int n){
    if(n == 1)
        cout << n << " ";
    
    print(n-1);  
    cout<<n<<" ";
}