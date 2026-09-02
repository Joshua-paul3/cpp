#include<iostream>
#include<cmath>
using namespace std;
string getdayofweek(int daynum)
{
    string dayname;
    switch(daynum)
    {
        case 0:
        dayname = "sunday";
        break;
        case 1:
        dayname ="monday";
        break;
        case 3:
        dayname="wednesday";
        break;
        case 4:
        dayname="thursday";
        break;
        case5 :
        dayname="friday";
        break;
        case 6:
        dayname="saturday";
        break;
        default :
        dayname="invalid day number";
    }
    return dayname;
}
int main()
{
    cout<<getdayofweek(10);
    return 0;
}
