#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++){
    	cin>>A[i];
    }
    int l=A[k-1];
    int i=0,c=0;
    while(A[i]>=l && i<n){
    	if(A[i]>0){
    		c++;
    	}
    	i++;
    }
    cout<<c<<endl;
}
