// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        int sum=0;
        int mx=0;
        for(int i=0;i<K;i++){
            sum += Arr[i];
        }
        
        for(int i=K;i<=N;i++){
           
               mx = max(mx,sum);
               sum -= Arr[i-K];
               sum += Arr[i];
               
               
          
            
        }
        
        return mx;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends
