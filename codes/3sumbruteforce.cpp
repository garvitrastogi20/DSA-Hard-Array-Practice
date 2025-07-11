// 3 SUM PROBLEM:

// in this problem, we are given an array and in that, we have to find triplets which will give sum=k
// suppose, target =0;
// and array given : {-1,0,1,2,-1,-4}
// arr[i]+arr[j]+arr[k]=0
// make sure that i!=j!=k
// [-1,2,-1] ,[0,1,-1]
// we can take elements in an order, but we have to give unique triplets

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(vector<int> a, int n, int target)
{
    set<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==target)
                {
                    vector<int> temp= {a[i], a[j], a[k]};
                    sort(temp.begin(), temp.end());
                    ans. insert(temp);
                }
            }
        }
    }
    vector<vector<int>> res(ans.begin(), ans.end());
    return res;

}

int main()
{
    vector<int> a={-1,0,1,2,-1,-4};
    int n= a.size();
    int target=0; // target
    
    vector<vector<int>> answ= triplets(a,n,target);
    for(auto i: answ)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}