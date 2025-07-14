#include<bits/stdc++.h>
using namespace std;

int countsubarray(vector<int> a, int sum)
{
    int cnt=0;
    int n= a.size();
    for(int i=0;i<n;i++)
    {
        int xorr=0;
        for(int j=i;j<n;j++)
        {   
            xorr=xorr^a[j];
            if(xorr == sum) cnt++;
        }
    }
    return cnt;
}

int main()
{
    vector<int> a={4,2,2,4,6};
    int sum= 6;
    int count= countsubarray(a,sum);
    cout<< count<<" ";
    return 0;
}