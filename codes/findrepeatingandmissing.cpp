#include<bits/stdc++.h>
using namespace std;

pair<int, int> findrepeatingandmissing(int arr[], int n)
{
    int repeating=-1;
    int missing=-1;
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                cnt++;
            }
        }
        if(cnt==2)
        {
            repeating=i;
        }
        else if(cnt==0)
        {
            missing=i;
        }
        if(repeating!=-1 && missing!= -1)
        {
            break;
        }
    }
    return {repeating, missing};
}

int main()
{
    int arr[]={4,3,6,2,1,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    pair<int, int>ans= findrepeatingandmissing(arr, n);
    cout<<"RESULT: "<<ans.first<<","<< ans.second<<endl;
    return 0;
}