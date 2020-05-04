//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int T;
//    cin>>T;
//    while(T--){
//        int n;
//        cin>>n;
//        vector<int> arr(n);
//        for(int i = 0;i < n;i++){
//            cin>>arr[i];
//        }
//        int pairs = 0;
//        int lastpair = 0;
//        sort(arr.begin(),arr.end());
//        for(int i = 1;i < n;i++){
//            if(arr[i] == arr[i-1]){
//                pairs+= lastpair;
//            }
//            else{
//                pairs += i;
//                lastpair = i;
//            }
//            
//        }
//        cout<<pairs<<"\n";
//    }
//    //code
//    return 0;
//}
