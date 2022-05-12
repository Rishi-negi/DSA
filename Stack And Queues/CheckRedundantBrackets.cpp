//edgy test case -->      a+b*(a/c-d) 
#include<stack>

bool checkRedundantBrackets(string exp)
{
	// Write your code here
    stack<char> st;
    for(int i=0 ; exp[i]!='\0' ; i++)
    {
           if(exp[i]=='(')
               st.push(exp[i]);
        
           else if(exp[i]=='+' || exp[i]=='-' ||  exp[i]=='/' ||  exp[i]=='*')
               st.push(exp[i]);
         
           else if( exp[i]==')' )
           {
               if(st.top()=='+' || st.top()=='-' || st.top()=='/' || st.top()=='*')
               {
                   while( !(st.top()=='(') )
                       st.pop();
                   
                   st.pop();
               }
               else if (st.top()=='(' )
                   return true;
               
           }
    }
    return false;
    
}
    