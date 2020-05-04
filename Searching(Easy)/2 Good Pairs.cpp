////https://practice.geeksforgeeks.org/problems/good-pairs/0
//#include<bits/stdc++.h>
//using namespace std;
//
//void test_case(){
//    int n; cin>>n;
//    vector<int> a(n);
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//
//    sort(a.begin(),a.end());
//
//    int count = 0,last_pointer = 0;
//    for(int i=1; i < n ; i++){
//        if(a[i-1]==a[i]){
//            count+=last_pointer ;
//        }else{
//            count+=i;
//            last_pointer = i;
//        }
//    }
//
//    cout<<count<<"\n";
//}
//
//int main() {
//    int t; cin>>t;
//    while(t--){
//        test_case();
//    }
//    //code
//    return 0;
//}
