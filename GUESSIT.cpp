#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	      for(int i=1; i<1000; i++){
	            cout<<i*i<<endl;
	            int ans;
	            cin>>ans;
	            if(ans == 1){
	                  break;
	            }
	      }
	}
	return 0;
}
