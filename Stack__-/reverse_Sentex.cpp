#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    stack<string>st;
    for(int i=0;i<s.length();i++)
    {
        string StoreWord="";
        while(s[i]!='.' && i<s.length())
        {
            StoreWord=StoreWord+s[i];
            i++;
        }
        st.push(StoreWord);
    }

    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s={"i.like.this.program.very.much"};
    reverse(s);
    
return 0;
}