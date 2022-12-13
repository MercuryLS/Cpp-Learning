#ifndef _DATE_H_
#define _DATE_H_

class Date
{
private:
    int year;
    int month;
    int day;
    int totalDays;

public:
    Date(int year, int month, int day); // 用年、月、日构造日期
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }
    int getMaxDay() const; // 获得当月有多少天
    bool isLeapYear() const{ // 判断当年是否为闰年
        return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    }
    void show() const; // 输出当前日期
    int operator-(const Date &date) const
    { // 计算两个日期之间差多少天
        return totalDays - date.totalDays;
    }
};
#endif
