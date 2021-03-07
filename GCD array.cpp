// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    int gcd(int N, int arr[])
    {
    int result= arr[0];
    for(int i=1;i<=N-1;i++)
      result= calculate(result,arr[i]);
      
    return result;
    }
    
    int calculate(int result,int value){
        
        while(value!=0){
            int r= result%value;
            result=value;
            value=r;
        }
        return result;
    }
};


// { Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}  // } Driver Code Ends
