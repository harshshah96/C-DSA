#include<bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector <int> ans;

        if(x<arr[0]){
            int i=0;
            while(i<k){
               ans.push_back(arr[i]);
                i++;
            }
            return ans;
        }

        if(x>arr[n-1]){
            int i=n-1;
            int j=k-1;
            while(j>=0){
                ans[j]=arr[i];
                i--;
                j--;
            }
            return ans;
        }

        int t=0;
        bool flag=false;
        int high=n-1;
        int low=0;
        int mid=-1;

        while(high>=low){
            mid = low +( high-low)/2;

            if(arr[mid]==x){
                flag=true;
                ans[t]=x;
                t++;
                break;
            }else if(arr[mid]>x) high=mid-1;
            else low=mid+1;
        }

        int lb=high;
        int hb=low;
        if(flag=true){
           lb=mid-1;
           hb=mid+1;
            }
        while(t<k && lb>=0 && hb<=n-1){
            int d1=abs(x-arr[lb]);
            int d2=abs(x-arr[hb]);

            if(d1>=d2){
                ans[t]=d1;
                lb--;}
            else {
                ans[t]=d2;
                hb++;
            }
            t++;
        }

        if(lb<0){
            while(t<k){
                ans[t]=arr[hb];
                t++;
                hb++;
            }
        }
        if(hb>n-1){
            while(t<k){
                ans[t]=arr[lb];
                t++;
                lb--;;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

        }

int main()
{

    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    vector <int> ans= findClosestElements(arr,4,-1);
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
    cout<<ans[2]<<endl; // 29.43
    cout<<ans[3]<<endl;

 return 0;
}