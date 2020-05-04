////https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0
//#include <bits/stdc++.h>
//#include <iostream>
//using namespace std;
//
//int main() {
//    int t; cin>>t;
//    while(t--){
//        int n; cin>>n;
//        vector<int> a,v;
//
//        for(int i=0;i<n;i++){
//            int x; cin>>x; a.push_back(x);
//        }
//
//        int largest = a[n-1];
//        v.push_back(a[n-1]);
//        for(int i=n-2;i>=0;i--){
//            int change = 0;
//            if(a[i]>=largest){
//                change=1;
//                largest = a[i];
//            }
//            if(change==1) v.push_back(largest);
//        }
//
//        vector<int>::iterator it;
//
//        for( it = v.end()-1 ; it >= v.begin() ; it-- ){
//            cout<<*it<<" ";
//        }cout<<"\n";
//    }
//    return 0;
//}
