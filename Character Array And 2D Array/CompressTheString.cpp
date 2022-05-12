string getCompressedString(string &a)
{
    int j=0,count;
    for(int i=0;a[i]!='\0';)
    {
        count=1;
        // int k=start;
        while(a[i]==(a[++j]))
        {
            count++;
            a[j]=' ';
        }
        if(count>1)
            a[i+1]=char('0'+count);
        
        i=j;
    }

    int space=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            char temp=a[i];
            a[i]=a[space];
            a[space]=temp;
            space++;
        }
    }
    return a;
}