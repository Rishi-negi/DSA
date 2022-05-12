#include<stack>
int countBracketReversals(string exp) {
	// Write your code here
    stack<char> s;
    
    if(exp.length()%2!=0)
        return -1;
    
    for(int i=0 ; exp[i]!='\0' ; i++){
        
        if(exp[i]=='{')
            s.push(exp[i]);
        
        else if(exp[i]=='}'){
            if(s.size() != 0 && s.top()=='{' )
                s.pop();
            else
                s.push(exp[i]);
        }   
    }
    
    int count = 0;
    char c1 , c2;
    while(!s.empty()){
        c1 = s.top();
        s.pop();
        c2 = s.top();
        s.pop();
        
        if(c1!=c2)
            count+=2;
        else if(c1==c2)
            count+=1;
    }
    return count;
}