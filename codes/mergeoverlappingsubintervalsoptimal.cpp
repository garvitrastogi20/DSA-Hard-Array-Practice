#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeoverlapping(vector<vector<int>> a)
{
    int n= a.size();
    sort(a.begin(),a.end());
    vector<vector<int>> ans;

    for(int i=0;i<n;i++)
    {
        if(ans.empty() || a[i][0] > ans.back()[1] )
        {
            ans.push_back(a[i]);
        }
        else{
            ans.back()[1]= max(ans.back()[1], a[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> a={
        {1,3}, {2,6}, {8,9}, {9,11}, {8,10}, {2,4}, {15,18}, {16,17}};
    vector<vector<int>> res= mergeoverlapping(a);
    for(auto it: res)
    {
        for(auto j: it)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}