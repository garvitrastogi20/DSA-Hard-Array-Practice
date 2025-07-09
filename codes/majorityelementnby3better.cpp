#include<bits/stdc++.h>
using namespace std;

vector<int> majorityelement(vector<int> v)
{
    int n= v.size();
    map<int, int> mpp;
    vector<int> ans;
    int mini= n/3;

    for(auto it: v)
    {
        mpp[it]++;
    }
    for(auto it: mpp)
    {
        if(it.second> mini)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main()
{
    vector<int> v= {1,1,1,2,3,3,3,4};
    vector<int> result= majorityelement(v);
    for(auto it: result)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}