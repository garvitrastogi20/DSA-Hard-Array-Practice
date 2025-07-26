// COUNT INVERSIONS
// the problem states that i<j 
// a[i]>a[j]
// for example: if an array is given:
//arr[]=[5 3 2 4 1]
// then satisfying the condition stated above, 8 pairs are there which are
// 5,3  5,2  5,4  5,1  3,2  3,1  2,1  4,1
// you can clearly see that the conditions are satisfied


#include<bits/stdc++.h>
using namespace std;

int countinversion(vector<int> a, int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]> a[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> a={5,3,2,4,1};
    int n= a.size();
    int ans= countinversion(a,n);
    cout<<ans;
    return 0;
}

// time complexity: O(N^2)
// space complexity: O(1)