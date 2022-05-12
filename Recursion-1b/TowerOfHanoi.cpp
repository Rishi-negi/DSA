// void towerOfHanoi(int n, char s, char a, char d) {
//     if(n==1)
//         cout<<s<<" "<<d<<endl;
    
//     towerOfHanoi(n-1 , s , d , a );
//     towerOfHanoi(n   , s , a , d );
//     towerOfHanoi(n-1 , a , s , d );
    
    
// }
                            
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    
 if (n == 0)
        return;
                
    towerOfHanoi(n - 1,source,destination,auxiliary);
    
    cout<< source<<" " << destination << endl;    
    
    towerOfHanoi(n - 1, auxiliary,source,destination);


}
