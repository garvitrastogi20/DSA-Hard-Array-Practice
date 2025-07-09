// PASCAL TRIANGLE
//        1
//       1  1
//      1  2  1
//     1  3  3  1
//    1  4  6  4  1
//   1  5  10  10  5   1
// three types of problem
// 1. Given the row and column, tell me the element at that place
// 2. Print any nth row of the pascal triangle
// 3. Given n- number of rows, print the entire triangle

// solving solution 1:
// brute force solution can be generate the entire triangle and look for the requirement
// easier way can be:
// given the row number r, we do r-1
// given the column number c, we do c-1
// now we do (r-1)c(r-1) (combination formula)
// combination formula: nCr = n!/ r!*(n-r)!

// shortcut for the combination formula:
// suppose we have:
// 7 C 2= 7!/ 2! *(5)!

//= 7*6* (5!)
//  2*1* (5!)

// cancel out 5! and we got 7*6/ 2*1
// if 10 C 3= 10*9*8/ 3*2*1

// IMPLEMENTATION
// int nCr(int n, int r)
// {
//     long long res=1; -> result
//     for(int i=0;i<r;i++)
//     {
//         res=res* (n-1);
//         res= res/ (i+1);
//     }
//     return res;
// }
// so to solve type 1 of the problem solution is the function nCr(n-1,c-1);

//2. second type of problem:
// to print nth row
// by observing we see that nth row -> n elements
// so we have to run loop for n times
// every element has a formula of nCr


// one formula to print the row by not repeatedly using the formula is:
// ans= ans*( (row/col)/col )

// IMPLEMENTATION

// ans= 1; -> first element of every row is 1 in pascal triangle
// print(ans)
// for(int i=1;i<n;i++)
// {
//     ans= ans* (n-i)   -> n= row  i= column
//     ans= ans/i   -> i= column  
//     print(ans);
// }
// time complexity will be O(N)
// space complexity will be O(1)

//3. third type of the problem
// we will use second type to generate each row

// its time to code it up

#include<bits/stdc++.h>
using namespace std;

vector<int> generaterow(int row)
{
    vector<int> ansrow;
    long long ans=1;
    ansrow.push_back(1);
    for(int col=1;col<= row;col++)
    {
        ans= ans*(row- col+1);
        ans= ans/ col;
        ansrow.push_back(ans);
    }
    return ansrow;
}

int findelement(int r, int c)
{
    long long res= 1;
    for(int i= 0; i<c;i++)
    {
        res= res*(r-1);
        res= res* (i+1);
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int> row= generaterow(i);
        for(auto it: row)
        {
            cout<<it<<"  ";
        }
        cout<<endl;
    }
    // pascal traingle is generated
    // now, solving solution number 1
    int r,c;
    cout<<"Enter the coordinates to find the element: "<<endl;
    cout<<"Enter the row: ";
    cin>>r;
    cout<<"Enter the column: ";
    cin>>c;
    int elem= findelement(n-1, c-1);
    cout<<"Element at that place: "<<elem<<endl;
    return 0;
}


