#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c,rpta=0;
	cin>>n>>a>>b>>c;
	for(int x=0;x<=4000;x++){
		for(int y=0;y<=4000;y++){
			int z=(n-x*a-y*b)/c;
			if(z>=0 && x*a+y*b+c*z==n) rpta=max(rpta,x+y+z);
		}
	}
	cout<<rpta<<endl;
}
