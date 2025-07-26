// same logic as in count inversion but a modification in merge function

#include<bits/stdc++.h>
using namespace std;

int countpairs(vector<int>&a, int low, int mid, int high)
{
    int cnt=0;
    int right= mid+1;
    for(int i= low; i<=mid;i++)
    {
        while(right<= high && a[i]>2LL*a[right])
        {
            right++;
        }
        cnt+=(right-(mid+1));
    }
    return cnt;
}

void merge(vector<int>&a, int low, int mid, int high)
{
    vector<int> temp;
    int left= low;
    int right= mid+1;

    while(left<= mid && right<= high)
    {
        if(a[left]<a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while(right<= high)
    {
        temp.push_back(a[right]);
        right++;
    }

    for(int i=0;i<temp.size();i++)
    {
        a[i+low]= temp[i];
    }

}

int mergesort(vector<int>& a, int low, int high)
{
    int cnt=0;
    if(low>= high) return 0;
    int mid= (low+high)/2;

    cnt+=mergesort(a,low, mid);
    cnt+=mergesort(a, mid+1, high);
    cnt+=countpairs(a, low, mid, high);
    merge(a, low, mid, high);
    return cnt;
}

int reversepairs(vector<int>&a, int n)
{
    return mergesort(a, 0, n-1);
}

int main()
{
    vector<int> a={1,3,2,3,1};
    int n= a.size();
    int count= reversepairs(a,n);
    cout<<count<<" ";
    return 0;
}