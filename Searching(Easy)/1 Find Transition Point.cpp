////https://practice.geeksforgeeks.org/problems/find-transition-point/1
////binary search
//
//// { Driver Code Starts
//#include <bits/stdc++.h>
//using namespace std;
//
//int transitionPoint(int arr[], int n);
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        int a[n], i;
//        for (i = 0; i < n; i++) {
//            cin >> a[i];
//        }
//        cout << transitionPoint(a, n) << endl;
//    }
//    return 0;
//}// } Driver Code Ends
//
//// Function to find the transition point
//int transitionPoint(int arr[], int n) {
//    int l=0;
//    int r=n-1;
//    int mid;
//    while(l<=r){
//        mid= (l+r)/2;
//        if(arr[mid]==1 && arr[mid-1]==0) return mid;
//        if(arr[mid]==0) l=mid+1;
//        else r = mid-1;
//    }
//    return -1;
//    
//    // code here
//}
