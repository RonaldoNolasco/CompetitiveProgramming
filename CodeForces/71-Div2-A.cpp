#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][101],f[n][11];
    for(int i=0;i<n;i++){
    	for(int j=0;j<11;j++){
    		f[i][j]='\0';
    	}
    }
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	if(strlen(a[i])<11){
    		for(int j=0;j<strlen(a[i]);j++){
    			f[i][j]=a[i][j];
    		}
    	}
    	else if(strlen(a[i])==11){
    		f[i][0]=a[i][0];
    		f[i][1]='9';
    		f[i][2]=a[i][strlen(a[i])-1];
    	}
    	else{
    		f[i][0]=a[i][0];
    		f[i][1]=((strlen(a[i])-2)/10)+'0';
    		f[i][2]=((strlen(a[i])-2)%10)+'0';
    		f[i][3]=a[i][strlen(a[i])-1];
    	}
    }
    for(int i=0;i<n;i++){
    	cout<<f[i]<<endl;
    }
}
