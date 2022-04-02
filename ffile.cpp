#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tt=0;tt<t;tt++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        printf("\nTHE SORTED ARRAY IS :- \n");
        for(int i=0;i<n;i++)
        {
            cout<<ar[i]<<"\t";
        }
         cout<<"\n";
    }
    return 0;
}
