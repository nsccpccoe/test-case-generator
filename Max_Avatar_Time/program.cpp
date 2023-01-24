#include <bits/stdc++.h>
using namespace std;

void slidingWindowMaximum(vector<int>nums, vector<int>&ans, int k){
    int n=nums.size();
    deque<int>dq;
    for(int i=0;i<nums.size();i++){
        if(!dq.empty() && dq.front()==i-k){
            dq.pop_front();
        }
        while(!dq.empty() && nums[dq.back()] < nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>=k-1){
            ans.push_back(nums[dq.front()]);
        }
    }

    vector<int>rem(k-1);
    int mx=0;
    for(int i=0;i<k-1;i++){
        mx=max(mx,nums[n-i-1]);
        rem[k-i-2]=mx;
    }
    for(int i=0;i<rem.size();i++){
        ans.push_back(rem[i]);
    }

}

int main(){
    cin.tie(0), cout.tie(0),ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        vector<int>nums;
        int n,k,f;
        cin>>n>>k>>f;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        vector<int>ans;
        slidingWindowMaximum(nums,ans,k);
        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }cout<<endl;
        // cout<<" ------------- "<<endl;
        for(int i=0;i<ans.size();i+=f){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
    return 0;
}
