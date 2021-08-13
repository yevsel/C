#include <iostream>

using namespace std;

int main()
{
    int howBig=0;
    cout <<"Size: ";cin>> howBig;
    for (int i=0;i<=howBig;i++){
        for (int j=0;j<=howBig-i;j++){
            cout <<" ";
        }
        for (int j=0;j<=i;j++){
            cout <<"*";
        }
        for (int j=0;j<=i-1;j++){
            cout <<"*";
        }
        cout <<""<<endl;
    }

    system("pause>0");
}
