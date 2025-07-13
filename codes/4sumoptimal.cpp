#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> foursum(vector<int> a, int target)
{
    int n= a.size();
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(i>0 && a[i]==a[i-1]) continue;
        for(int j= i+1;j<n;j++)
        {
            if(j!= i+1 && a[j]==a[j-1]) continue;
            int k= j+1;
            int l= n-1;
            while(k<l)
            {
                long long sum= a[i]+a[j];
                sum+= a[k];
                sum+= a[l];
                if(sum<target) k++;
                else if(sum> target) l--;
                else{
                    vector<int> temp= {a[i],a[j],a[k],a[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && a[k]==a[k-1]) k++;
                    while(k<l && a[l]==a[l+1]) l--;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> a={4, 1, 5, 3, 1, 2, 4, 5, 3, 1, 2, 4, 3, 5};
    int target =8;
    vector<vector<int>> res= foursum(a, target);
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