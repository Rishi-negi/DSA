void printSubstrings(char str[]) {
   //cout<<"length :"<<strlen(str)<<endl;
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = i; j < strlen(str); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<str[k];
            }
            cout<<endl;     
        }   
    }  
}