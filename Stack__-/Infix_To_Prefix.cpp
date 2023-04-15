#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int precidence(char c)
{
     if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }

    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string InfixToPrefix(string s)
{
    //Sabse Pahale String ko Reverse karte hai......
    //uske badd open braicket ko close aur close ko open karte hai ....
    //then end mai answer ko bhi reverse karte hai.....

    reverse(s.begin(),s.end());
    stack<char>st;
    string ans;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            ans+=s[i];
        }
        else if(s[i]==')')
        {
            st.push(s[i]);
        }

        else if(s[i]=='(')
        {
            while(!st.empty() && st.top()!=')')
            {
                ans+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && precidence(st.top())>=precidence(s[i]))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]); 
        }
    }

    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    cout<<InfixToPrefix("(a-b/c)*(a/k-l)")<<endl;
return 0;
}