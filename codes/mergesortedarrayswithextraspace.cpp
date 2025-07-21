// MERGE TWO SORTED ARRAYS WITHOUT EXTRA SPACE: OPTIMAL SOLUTION 1 
// for ex: arr1[] ={1,3,5,7}
// arr2[]={0,2,6,8,9}

// then the result should be: {0,1,2,3,5,6,7,8,9} but without using any extra space

// so to give the answer, we have to reshuffle in the elements in the same array such that they produce the answer
// if it is a brute force solution and if extra space can be used, then we can create an array and use 2 pointer approach

// so now i am giving brute force solution having extra space

#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m)
{
    int arr3[n+m];
    int left=0;
    int right=0;
    int index=0;
    while(left<n && right<m)
    {
        if(arr1[left]<= arr2[right])
        {
            arr3[index]= arr1[left];
            left++;
            index++;
        }
        else{
            arr3[index]=arr2[right];
            index++;
            right++;
        }
    }
    while(left< n)
    {
        arr3[index++]=arr1[left++];
    }
    while(right< m)
    {
        arr3[index++]= arr2[right++];
    }

    for(int i=0;i<n+m;i++)
    {
        cout<<arr3[i]<<" ";
    }
}
int main ()
{
    int arr1[]={1,3,5,7};
    int arr2[]={0,2,6,8,9};
    int n= sizeof(arr1)/sizeof(arr1[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);

    merge(arr1,arr2, n, m);
    
    return 0;
}


// time complexity: O(n+m) +O(n+m)
// space complexity: O(n+m)