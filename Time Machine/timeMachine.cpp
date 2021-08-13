#include <iostream>
using namespace std;

int main(){

	int hour;
    int minute;
    int second;
    float remainder;
    int time;
    int minrem;
    cout<<"The time: ";cin>>time;


    hour=time/3600;
    remainder=time%60;
    minrem=time%3600;
    minute=minrem/60;
    second=remainder;
    cout<<hour<<" hr :"<<minute<<" min :"<<second<<" sec";

    system("pause>0");
	return 0;
}
