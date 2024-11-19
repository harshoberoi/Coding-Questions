Merge two sorted arrays


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"value of M and N : \n";
    cin>>m>>n;

    vector <int> arr1(m);

    for(int i = 0;i<m ; i++)
    {
        cin>>arr1[i];
    }

    vector <int> arr2(n);

    for(int i = 0;i<n ; i++)
    {
        cin>>arr2[i];
    }

    //Merging 

    for(int i = 0;i<n;i++)
    {
        arr1.push_back(arr2[i]);

    }

    sort(arr1.begin(),arr1.end());

    for(int i = 0;i<m+n;i++)
    {
        cout<<arr1[i]<<" ";

    }


}


