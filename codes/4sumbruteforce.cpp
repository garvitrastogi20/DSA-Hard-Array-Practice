#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> foursum(vector<int> a, int n, int target)
{
    set<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    if(a[i]+a[j]+a[k]+a[l]==target)
                    {
                        vector<int> temp={a[i],a[j],a[k],a[l]};
                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> answer(ans.begin(), ans.end());
    return answer;  
}

int main()
{
    vector<int> a={1,0,-1,0,2,-2};
    int n= a.size();
    int target= 0;
    vector<vector<int>> result= foursum(a,n, target);
    for(auto it: result)
    {
        for(auto j: it)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}