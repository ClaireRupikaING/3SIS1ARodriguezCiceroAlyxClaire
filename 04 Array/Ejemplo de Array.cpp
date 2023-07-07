#include <iostream>

using namespace std;

int main(){
    int n, m = 5;
    int a[] = {3,4,5,8,1};

    n = a[0];
    cout<<n<<endl;
    a[0] = a[1] + a[2];
    cout<<a[0]<<endl;
    a[1]++;
    cout<<a[1]<<endl;
    a[n] = m + 10;
    cout<<a[n]<<endl;
    a[n+1] = 7;
    cout<<a[n+1]<<endl;

    cout<<a[0] <<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
    cout<<endl;
}