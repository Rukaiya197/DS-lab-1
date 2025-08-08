#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Enter a,b and c"<<endl;
    if(a>b && a>c){
        cout<<"a is the biggest;"<<a<<endl;
    }
else if(b>a && b>c){
    cout<<"b is the biggest"<<b<<endl;
}
else{
    cout<<"c is the biggest"<<c<<endl;
}
    return 0;
}

