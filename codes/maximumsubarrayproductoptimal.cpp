#include<bits/stdc++.h>
using namespace std;

int maxproduct(vector<int>&a)
{
    int pre= 1, suff=1;
    int ans= INT_MIN;
    int n= a.size();

    for(int i=0;i<n;i++)
    {
        if(pre==0) pre=1;
        if(suff==0) suff=1;

        pre=pre*a[i];
        suff= suff* a[n-i-1];

        ans= max(ans, max(pre,suff));
    }
    return ans;
    
}


int main()
{
    vector<int> a={2,3,-2,4};
    int ans= maxproduct(a);
    cout<<ans;
    return 0;
}