// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> findElements(int a[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        vector <int> res = findElements(a,n);
        
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
}// } Driver Code Ends




vector<int> findElements(int a[], int n)
{   
    vector<int> i1;
    sort(a,a+n);
    int max1=*(max_element(a,a+n));
    int max2=*(max_element(a,a+(n-1)));
    for(int i=0;i<n-2;i++){
        i1.push_back(a[i]);
    }
    return i1;
    
}
