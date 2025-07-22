#include<bits/stdc++.h>
using namespace std;

pair<int, int> findrm(int arr[], int n)
{
    int repeating=-1, missing=-1;
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
        if(cnt==0) missing=i;
        if(cnt==2) repeating =i;
        if(repeating!= -1 && missing!= -1)
        {
            break;
        }
    }
    return {repeating, missing};
}

int main()
{
    int arr[]={4,3,2,6,1,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    pair<int, int> res= findrm(arr,n);
    cout<<"RESULT: "<< res.first<<" ,"<< res.second<<" ";
    return 0;
}