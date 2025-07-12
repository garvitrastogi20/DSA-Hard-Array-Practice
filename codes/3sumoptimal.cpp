#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(vector<int> a, int n, int target)
{
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(i>0 && a[i]==a[i-1]) continue;
        int j= i+1;
        int k= n-1;
        while(j<k)
        {
            int sum= a[i]+a[j]+a[k];
            if(sum<target)
            {
                j++;
            }
            else if(sum> target)
            {
                k--;
            }
            else{
                vector<int> temp= {a[i], a[j], a[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && a[j]==a[j-1]) j++;
                while(j<k && a[k]==a[k+1]) k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> a={1,-1,0,2,-1,1,5,6,-11};
    int n= a.size();
    int target= 0;
    vector<vector<int>> result= triplets(a,n,target);
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