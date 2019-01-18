#include <iostream>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long x=((n%a==0)*(n/a)+(n%a!=0)*((n/a)+1))*((m%a==0)*(m/a)+(m%a!=0)*((m/a)+1));
    cout<<x<<endl;
    return 0;
}
