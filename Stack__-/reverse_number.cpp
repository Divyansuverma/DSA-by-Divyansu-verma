#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void InsertAtButtom(stack<int> &st,int elem)
{
    // Base..
    if(st.empty())
    {
        st.push(elem);
        return;
    }

    //Recurcive call.....
    int insertButtom=st.top();
    st.pop();
    InsertAtButtom(st,elem);
    st.push(insertButtom);

}

void reverse(stack<int> &st)
{
    // Base..
    if(st.empty())
    {
        return;
    }

    //Recurcive call.....
    int store=st.top();
    st.pop();
    reverse(st);
    InsertAtButtom(st,store);

}


int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);   //>>>>>>>>>......Store in Stack [5,4,3,2,1];......<<<<<<<<<<
    s.push(4);
    s.push(5);
    
    reverse(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
return 0;
}