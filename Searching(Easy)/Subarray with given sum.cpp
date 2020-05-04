//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
//https://www.youtube.com/watch?time_continue=39&v=81dfLEDq8hQ&feature=emb_logo
//Sliding window Problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        long long n,s;
        cin>>n>>s;
        vector<int> v;

        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x);
        }

        int i=0,j=0,sum=v[i],flag=0;
        while(j<n){
            if(sum<s){
                j++;
                sum+=v[j];
            }else if(sum>s){
                sum-=v[i];
                i++;
            }else{
                cout<<i+1<<" "<<j+1<<"\n";
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<-1<<"\n";
        }

    }
    //code
    return 0;
}
