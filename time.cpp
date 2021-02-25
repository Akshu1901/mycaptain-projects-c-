#include <iostream>
#include<iomanip>
using namespace std;
class Time{
    private:
    int seconds,ss,mm,hh;
    public:
    void gett(){
        cout<<"Enter time:";
        cout<<"Hours?";
        cin>>hh;
        cout<<"Minutes?";
        cin>>mm;
        cout<<"Seconds?";
        cin>>ss;
        
    }
    void convertt(){
        seconds=(3600*hh)+(60*mm)+ss;
    }
    void display(){
        cout<<"The time is = "<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
        cout << "Time in total seconds: " << seconds;
    }
}; 

int main()
{
    Time t;
    t.gett();
    t.convertt();
    t.display();

    return 0;
}
