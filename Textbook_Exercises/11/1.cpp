/*
1．定义一个时间类Time，通过运算符重载实现时间的比较（关系运算）、时间增加/减少若干秒
（+=和-=）、时间增加/减少1秒（++和--）、计算两个时间相差的秒数（-）以及输出时间对象
的值（时—分—秒）。
*/
#include<iostream>
using namespace std;

class Time{
public:
    int hour;
    int minute;
    int second;
    Time(int hour, int minute, int second):hour(hour), minute(minute), second(second){}
    void huajian(){//化简，避免出现60秒60分钟，或负数
        if(second>=60){
            second -=60;
            minute++;
        }
        if(minute>=60){
            minute -=60;
            hour++;
        }
        if(second<0){
            minute--;
            second+=60;
        }
        if(minute<0){
            minute+=60;
            hour--;
        }
    }
    Time operator+(const Time other){
        Time result(hour+other.hour,minute+other.minute,second+other.second);
        result.huajian();
        return result;
    }
    Time operator-(const Time other){
        Time result(hour-other.hour,minute-other.minute,second-other.second);
        result.huajian();
        return result;
    }
    Time& operator++(){
        second++;
        this->huajian();
        return *this;
    }
    Time& operator--(){
        second--;
        this->huajian();
        return *this;
    }
    Time operator++(int){
        Time temp = Time(hour,minute,second);
        second++;
        huajian();
        return temp;
    }
    Time operator--(int){
        Time temp = Time(hour,minute,second);
        second--;
        huajian();
        return temp;
    }
    Time& operator+=(Time other){
        second += other.second;
        minute += other.minute;
        hour += other.hour;
        huajian();
        return *this;
    }
    Time& operator-=(Time other){
        second -= other.second;
        minute -= other.minute;
        hour -= other.hour;
        huajian();
        return *this;
    }
    friend ostream& operator<<(ostream& os, const Time time){
        os<<time.hour<<"-"<<time.minute<<"-"<<time.second;
        return os;
    }
};
int main(){
    Time time1(14, 4, 12);
    Time time2(14, 1, 59);
    Time time3 = time1-time2;
    ++time2;
    cout<<time1<<endl<<time2<<endl<<time3<<endl;
}