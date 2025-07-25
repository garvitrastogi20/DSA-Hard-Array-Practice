#include<bits/stdc++.h>
using namespace std;

vector<int> majorityelement(vector<int> v)
{
    int n= v.size();

    int cnt1=0, cnt2=0;
    int el1= INT_MIN;
    int el2= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(cnt1==0 && v[i]!= el2)
        {
            cnt1= 1;
            el1=v[i];
        }
        else if(cnt2==0 && v[i]!= el1)
        {
            cnt2=1;
            el2= v[i];
        }

        else if(v[i]== el1) cnt1++;
        else if(v[i]== el2) cnt2++;
        else{
            cnt1--, cnt2--;
        }
    }

    vector<int> ls;
    cnt1=0, cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(el1== v[i]) cnt1++;
        else if(el2== v[i]) cnt2++;
    }

    int mini= (int)(n/3) +1;
    if(cnt1 >= mini) ls.push_back(el1);
    if(cnt2 >= mini) ls.push_back(el2);
    sort(ls.begin(), ls.end());
    return ls;
    
}

int main()
{
    vector<int> v={1,1,1,2,3,3,3,4};
    vector<int> result= majorityelement(v);
    for(auto it: result)
    {
        cout<<it<<" ";
    }
    return 0;
}