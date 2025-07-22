// USING HASHARRAY

#include<bits/stdc++.h>
using namespace std;

vector<int> findmissandrep(vector<int> arr, int n)
{
    int hash[n+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    int repeating= -1;
    int missing=-1;
    for(int i=1;i<=n;i++)
    {
        if(hash[i]==2) repeating= i;
        else if(hash[i]==0) missing =i;
        if(repeating!=-1 && missing!= -1)
        {
            break;
        } 
    }
    
    return {repeating, missing};
}

int main()
{
    vector<int> arr={4,3,5,6,1,1};
    int n= arr.size();
    vector<int> res= findmissandrep(arr, n);
    for(auto it: res)
    {
        cout<<it<<" ";
    }
    return 0;
}