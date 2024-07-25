#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    double avg=0;
    vector<int>ar(n);
    int sum=0;
    for(int x=0;x<n;x++)
    {
        cin>>ar[x];
        sum+=ar[x];
    }
    cout<<"Average is "<<sum/n;



}
