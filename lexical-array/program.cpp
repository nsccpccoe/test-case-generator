#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;
        int arr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       
        int mini=INT_MAX;
        for(int i=n-1;i>=0;i--){
            if((arr[i])>mini){
                if(arr[i]<k)            //except arr[i]==k
                    arr[i]++;
            }
            else{
                mini=arr[i];
            }
        }
       
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;

    }
    return 0;
}