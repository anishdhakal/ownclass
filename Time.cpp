#include<iostream>
#include "Time.h"
using namespace std;


Time::Time(int hr,int minu,int sec)
{
    setHour(hr);
    setMinute(minu);
    setSecond(sec);
    //totalSecond(hour,minute,second);
}
void Time::displayTime()
{

    cout<< "The total time in seconds is " << totalSecond(getHour(), getMinute(), getSecond())<<endl;
}
void Time::setHour(int hr)
{
    hour=hr;
}
void Time::setMinute(int minu)
{
    minute=minu;
}
void Time::setSecond(int sec)
{
    second=sec;
}
int Time::getHour()
{
    return hour;
}
int Time::getMinute()
{
    return minute;
}
int Time::getSecond()
{
    return second;
}
int Time::totalSecond(int hour, int minute, int second)
{
    return (hour*60*60+minute*60+second);
}
