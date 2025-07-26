#include<bits/stdc++.h>
using namespace std;
int merge(vector<int>&a, int low, int mid, int high)
{
    vector<int> temp;
    int left= low;
    int right= mid+1;
    int cnt=0;
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
            cnt+= (mid-left+1);
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
    return cnt;
}

int mergesort(vector<int>&a, int low, int high)
{
    int cnt=0;
    if(low>= high) return cnt;
    int mid= (low+high)/2;
    
    cnt+=mergesort(a, low, mid);
    cnt+=mergesort(a, mid+1, high);
    cnt+=merge(a, low, mid, high);
    return cnt;
}

int countinversion(vector<int> a, int n)
{
    
    return mergesort(a,0,n-1);
}
int main()
{
    vector<int> a={5,8,9,6,3,1,4,7};
    int n= a.size();
    int count= countinversion(a,n);
    cout<<count<<endl;
    return 0;
}