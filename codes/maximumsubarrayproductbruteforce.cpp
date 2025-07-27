#include<bits/stdc++.h>
using namespace std;

int maxproduct(vector<int> a, int n)
{
    int maxi= INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int prod= 1;
            for(int k=i;k<=j;k++)
            {
                prod= prod*a[k];
            }
            maxi= max(maxi, prod);
        }
    }
    return maxi;
}

int main()
{
    vector<int> a={2,3,-2,4};
    int n= a.size();
    int ans= maxproduct(a, n);
    cout<<ans;
    return 0; 
}