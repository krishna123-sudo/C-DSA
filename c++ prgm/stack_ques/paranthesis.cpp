#include<iostream>
#include<stack>
using namespace std;

bool isparanthesis(string input){
    stack<int> s;
    for(auto ch:input){
        switch(ch){
            case '(':
            case '{':
            case '[':s.push(ch);
            break;

            case ')': if(!s.empty() and s.top()=='(')
            {
                s.pop();
            }else
            {
                return false;
            }

            break;


            case '}': if(!s.empty() and s.top()=='{')
            {
                s.pop();
            }else
            {
                return false;
            }

            break;

            case ']': if(!s.empty() and s.top()=='[')
            {
                s.pop();
            }else
            {
                return false;
            }

            break;

        }
    }

    if(s.empty()){
        return true;
    }else
    {
        return false;
    }
}

int main (){
    string s;
    cin>>s;
    if(isparanthesis(s)){
        cout<<"valid"<<endl;
    }else
    {
        cout<<"not valid"<<endl;
    }

    return 0;
}