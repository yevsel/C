#include <iostream>
using namespace std;

int main(){
    int times;
    int a=0;
    int b=1;
    int c;

    cout<<"Times: ";cin>>times;
    cout<<0<<" ";
    for(int i=0;i<times;i++){
        c=b+a;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    system("pause>0");
    return 0;
}