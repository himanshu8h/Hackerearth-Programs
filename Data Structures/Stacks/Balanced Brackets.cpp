/*Author::Suman Pramanik
Using STACK STL*/
#include<bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;
int main()
{
    string str;
    int t,f;
    cin>>t;
    while(t--)
    {
        stack<char> s1;
        cin>>str; f=1;
        for(int i=0;str[i]!='\0';i++)
        {
            switch(str[i])
            {
                case '[':
                case '{':
                case '(':
                    s1.push(str[i]);
                    break;
                case ')':
                    if(s1.empty() || s1.top()!='(')
                        f=0;
                    else
                        s1.pop();
                    break;
                case '}':
                    if(s1.empty() || s1.top()!='{')
                        f=0;
                    else
                        s1.pop();
                    break;
                case ']':
                    if(s1.empty() || s1.top()!='[')
                        f=0;
                    else
                        s1.pop();
                    break;
            }
            if(!f)
                break;
        }
        if(s1.empty() && f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
