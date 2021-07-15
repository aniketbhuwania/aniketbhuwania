#include<bits/stdc++.h> 

using namespace std ;

int main()
{
    int n;

    cin>>n;
    
    int x[n],y[n],z[n];

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
        cin>>z[i];
    }

    int total1=0 ,total2=0,total3=0, k=0;

    for(int i=0;i<n;i++)
    {
        k = x[i];
        total1 += k;
    }
    for(int i=0;i<n;i++)
    {
        k = z[i];
        total2 += k;
    }
    for(int i=0;i<n;i++)
    {
        k = z[i];
        total3 += k;
    }

    if(total1==0 && total2==0 && total3==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}