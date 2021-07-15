#include <bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    cin>>inp;
    string out;
    int k=inp.length();

    for(int i=0;i<k;i++)
    {
        if(inp[i]=='.')
        {
            out += '0' ;
        }
        else if(inp[i]=='-'&&inp[i+1]=='.')
        {
            if(true)
            {
                i+=1;
            }
            out += '1' ;
        }
        else if(inp[i]=='-'&&inp[i+1]=='-')
        {
            if(true)
            {
                i+=1;
            }
            out += '2' ;
        }
    }
    cout<<out;
}