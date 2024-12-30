#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if(w>2 && w%2==0)
    {
    cout<<"YES";
    return 0;
    }

    int w1 = w/2;
    int w2 = w%2;
   
    if(w1%2==0 && w2%2==0)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}
