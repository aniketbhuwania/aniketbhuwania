#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void compare(string a, string b)
{
    if(a!=b)
    {
        if(a>b)
        {
            cout<<"1";
        }
        else
        {
            cout<<"-1";
        }
    }
    else
    {
        cout<<"0";
    }

}

int main()
{
    string a;
    string a1;

    cin>>a;
    cin>>a1;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(a1.begin(), a1.end(), a1.begin(), ::tolower);

    compare(a,a1);
}
