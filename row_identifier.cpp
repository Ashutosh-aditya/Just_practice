#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,d=0,f=0;
    cout<<"Enter no. of rows and columns\n";
    cin>>m>>n;
    int ar[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>ar[j][i];
            cout<<"\n";
    for(int i=0;i<m;i++){
        cout<<"Row no."<<i+1<<" => ";
        for(int j=0;j<n;j++)
            {cout<<"\t"<<ar[j][i]<<"\t";}
            cout<<"\n\n";}
    
    return 0;
}
