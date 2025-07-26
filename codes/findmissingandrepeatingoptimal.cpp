// in the optimal solution, we use basic mathematics

// first we initialise two variable x-> repeating and y-> missing
// then we take sum of all elements of present array, e.g., {4,3,5,6,1,1}  S
// then we take sum of all natural numbers upto n(size of arr), n*(n+1)/2; Sn  

// then we subtract them, . understand it from the video

#include<bits/stdc++.h>
using namespace std;

vector<int> findmissandrep(vector<int> a)
{
    long long n= a.size();
    
    long long sn= (n*(n+1))/2;
    long long s2n= (n*(n+1)*(2*n+1))/6;

    long long s=0, s2=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        s2+= (long long) a[i] * (long long) a[i];
    }
    long long val1= s-sn;
    long long val2= s2-s2n;

    val2= val2/ val1;
    long long x= (val1+ val2)/2;
    long long y= x- val1;
    return {(int)x, (int)y};
}

int main()
{
    vector<int> a={4,3,5,6,1,1};
    vector<int> ans= findmissandrep(a);
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
    return 0;
}