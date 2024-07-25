
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string w="";
    for(int x=s.size()-1;x>=0;x--)
    {
        w=w+s[x];

    }
    cout<<w;


}
