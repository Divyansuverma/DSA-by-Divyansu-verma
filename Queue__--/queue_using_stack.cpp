#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class guddu
{
    public:
    stack<int>s1;
    stack<int>s2;

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if(s1.empty() && s2.empty())
        {
            cout<<"queue is empty: "<<endl;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int ans=s2.top();
        s2.pop();
        return ans;
    }
};

int main()
{
    guddu a;
    a.push(5);
    a.push(8);
    a.push(3);
    a.push(9);
    cout<<"pop element: "<<a.pop()<<endl;
    cout<<"pop element: "<<a.pop()<<endl;
    cout<<"pop element: "<<a.pop()<<endl;
    cout<<"pop element: "<<a.pop()<<endl;
    cout<<"pop element: "<<a.pop()<<endl;
    cout<<"pop element: "<<a.pop()<<endl;

return 0;
}