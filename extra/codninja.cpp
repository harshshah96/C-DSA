#include<bits/stdc++.h>
#define pp pair<int, int>
using namespace std;

// pp firstAndLastPosition(vector<int>& arr, int n, int k){
//     pp ans;
//     int count=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]==k) count++;
//     }
//     ans.first=INT_MIN;
//     for(int i=0 ; i<n && count!=0 ; i++){
//         if(arr[i]==k && ans.first==INT_MIN){
//             ans.first=i;
//         }

//         if (arr[i] == k) {
//             ans.second=i;
//             count--;
//         }
        
//     }
//     return ans;
// }

int main()
{
    // vector<int> arr{0,1,1,2,5,7,1,5};
    // pp ans1= firstAndLastPosition(arr, 8,5);
    // cout<< ans1.first<<" "<<ans1.second<<endl;
    string s= "";
    string a= "abc" ;
    s+= a + " "+ a;
    cout<<s;




 return 0;
}