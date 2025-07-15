// merging overlapping subintervals
// in this lets understand using an example

//(1,3),(2,6),(8,9),(9,11),(8,10),(2,4),(15,18),(16,17)

// to merge the overlapping subintervals, answer is:(1,6),(8,11),(15,18)
// first sort all the pairs
// in sorting the arrays, they are sort according to the first element.
// and if first element is same, for ex. (2,6) (2,4) they are sort according to second element

//(1,3),(2,4),(2,6),(8,9),(9,11),(15,18),(16,17)
// start iterating and find possible intervals
// we will check by the concept that if the first element is before the last element of a interval.
// (1,3),(2,4)
// 2 comes between of 1 and 3- overlapping

// code
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeoverlapping(vector<vector<int>>&a)
{
    int n= a.size();
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        //a[i][0] means a[i]-> mtlb pair or a[i][0] means a[i] ka 0th index
        //a[i][1] means a[i] ka first index

        int start= a[i][0];
        int end= a[i][1];

        if(!ans.empty() && end<= ans.back()[1])
        {
            continue;
        }

        for(int j= i+1;j<n;j++)
        {
            if(a[j][0]<= end)
            {
                end=max(end, a[j][1]);
            }
            else{ 
                break;
            }
        }
        ans.push_back({start,end});
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