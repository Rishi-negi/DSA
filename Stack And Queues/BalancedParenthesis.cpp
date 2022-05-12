#include <stack>
bool isBalanced(string exp) 
{
    // Write your code here
    stack<char> s;
    
    if( exp[0]==']' || exp[0]=='}' || exp[0]==')' )
        return false;
    
    for(int i=0 ; exp[i]!='\0' ; i++)
    {
        if( exp[i]=='[' || exp[i]=='{' || exp[i]=='(' ){
            s.push(exp[i]);
            continue; 
        }
        
        if(exp[i]==']')
        {
            if(s.top()=='['){
                s.pop();
                continue;
            }
            else
                return false;
        }
        
        else if(exp[i]=='}')
        {
            if(s.top()=='{'){
                s.pop();
                continue;
            }
            else
                return false;
        }
        
        else if(exp[i]==')')
        {
            if(s.top()=='('){
                s.pop();
                continue;
            }
            else
                return false;
        }
    }
    
    if(s.empty())
        return true;
    
    return false;
}