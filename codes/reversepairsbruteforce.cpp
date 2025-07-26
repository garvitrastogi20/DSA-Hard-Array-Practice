//REVERSE PAIR CONDITION
// i<j and a[i]> 2*a[j]

#include<bits/stdc++.h>
using namespace std;

int reversepairs(vector<int>a, int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]> 2*a[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> a={1,3,2,3,1};
    int n= a.size();
    int count= reversepairs(a, n);
    cout<<count<<" ";
    return 0;
}