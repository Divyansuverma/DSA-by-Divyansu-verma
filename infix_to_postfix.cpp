#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int prc(char opr)
    {
        if (opr == '^')
            return 3;
        else if (opr == '*' || opr == '/')
            return 2;
        else if (opr == '+' || opr == '-')
            return 1;
        else
            return -1;
    }
    void infixtoPostfix(string s)
    {
        stack<char> st;
        string result;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= 0 && c <= 9)
                result = result + c;
            else if (c == '(')
                st.push(c);
            else if (c == ')')
            {
                while ((st.top() != '(') && (!st.empty()))
                {
                    result = result + st.top();
                    st.pop();
                }
                if (st.top() == '(')
                {
                    st.pop();
                }
            }
            else
            {
                while (!st.empty() && prc(s[i]) <= prc(st.top()))
                {
                    result = result + st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        while (!st.empty())
        {
            result = result + st.top();
            st.pop();
        }
        cout << result << endl;
    }
};
main()
{
    Stack obj;
    string exp;
    char choise;
    do
    {
        cout << "Enter the Expresion: " << endl;
        cin >> exp;
        obj.infixtoPostfix(exp);

        cout << "Do  you went to Try another Expresion [Y/N] : ";
        cin >> choise;
    } while (choise == 'Y' || choise == 'y');

    cout << endl
         << "OK!" << endl
         << "  THANK U......BEST OF LUCK....>>>>>>>>>" << endl
         << endl;
}
