#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(vector<int> a, int n, int target)
{
    set<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        set<int> hashset;
        for(int j=i+1;j<n;j++)
        {
            int third= target- (a[i]+a[j]);
            if(hashset.find(third) != hashset.end())
            {
                vector<int> temp={a[i], a[j], third};
                sort(temp.begin(), temp.end());
                ans. insert(temp);
            }
            hashset.insert(a[j]);
        }
    }
    vector<vector<int>> answer(ans.begin(), ans.end());
    return answer;
}

int main()
{
    vector<int> a={-1,0,1,2,-1,-4};
    int n= a.size();
    int target= 0;

    vector<vector<int>> res= triplets(a,n,target);
    for(auto i: res)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}