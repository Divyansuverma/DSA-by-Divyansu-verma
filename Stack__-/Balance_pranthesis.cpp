#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isVaild(string s)
{
    stack<char>st;
    bool ans=true;
    int n=s.size();

    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(!st.empty() && s[i]==')')
        {
            if(st.top()=='(')
            {
              st.pop();
            }
            else
            {
              ans=false;
              break;
            }
        }

        else if(!st.empty() && s[i]=='}')
        {
            if(st.top()=='{')
            {
              st.pop();
            }
            else
            {
              ans=false;
              break;
            }
        }

        else if(!st.empty() && s[i]==']')
        {
            if(st.top()=='[')
            {
              st.pop();
            }
            else
            {
              ans=false;
              break;
            }
        }
    }

    if(!st.empty())
    {
        return false;
    }
    return ans;
}
int main()
{
    string s={"{([])}"};

    if(isVaild(s))
    {
        cout<<"Valide Parenthesis: "<<endl;
    }
    else
    {
    cout<<"Invalide: "<<endl;
    }
return 0;
}