#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long long t;
	cin>>t;
	while(t--){
	      long long w1, w2, x1, x2, m, diff;
	      cin>>w1>>w2>>x1>>x2>>m;
	      
	      diff = w2-w1;
	      
	      if(diff>=x1*m && diff<=x2*m){
	            cout<<"1"<<endl;
	      }else{
	            cout<<"0"<<endl;
	      }
	      
	}
	
	return 0;
}
