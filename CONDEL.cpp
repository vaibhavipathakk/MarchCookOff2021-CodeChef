#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;

    long long arr[n];
    long long one=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            one++;
        }
    }
    long long mn=INT_MAX,ans=0;
    long long i=0,j=k-1;
    for(long long l=0;l<k;l++){
        ans+=arr[l];
    }
    mn=min(mn,ans);
    while(i<=n-k){
        ans-=arr[i];
        i++;
        j++;
        ans+=arr[j];

        mn=min(mn,ans);
    }
    long long realans=(mn*(mn+1))/2;
    realans+=(one-mn);
    cout<<realans<<endl;

}

int main(){
    long long t;
    cin>>t;
    while(t--) solve();
    return 0;
}
