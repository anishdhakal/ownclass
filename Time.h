using namespace std;

class Time{
private:
    int hour,minute,second;
    int totalSecond(int, int , int);

public:
    Time(int hr=0,int minu=0,int sec=0);
    void displayTime();
    void setHour (int);
    void setMinute(int );
    void setSecond(int );
    int getHour();
    int getMinute();
    int getSecond();
};
