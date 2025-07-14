// XOR: LEARN FROM CHATGPT. SIMPLY MEANS WHICH ARE SAME THEY ARE CANCEL OUT
// AND THOSE ARE DIFFERENT THEY ARE SUMED UP
// JUST LIKE IN IEEE: 0 0 = 1
// 1 1 = 0, 0 1 =1 , 1 0= 1

#include<bits/stdc++.h>
using namespace std;

int countsubarray(vector<int> a, int sum)
{
    int n=a.size();
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int xorr=0;
            for(int k=i;k<=j;k++)
            {
                xorr=xorr^a[k];
            }
            if(xorr== sum)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> a={4,2,2,6,4};
    int sum=6;
    int cnt= countsubarray(a, sum);
    cout<<cnt;
    return 0;
}