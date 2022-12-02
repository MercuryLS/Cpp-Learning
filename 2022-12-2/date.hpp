#ifndef _DATE_HPP_
#define _DATE_HPP_
class Date
{
private:
    int year,month,day,totalDays;
public:
    Date();
    Date(int year,int month,int day);
    int getYear() const
    {
        return year;
    }
    int getMonth() const
    {
        return month;
    }
    int getDay() const
    {
        return day;
    }
    int getMaxDay() const;
    bool isLeapYear() const
    {
        return year%4==0&&year%100!=0||year%400==0;
    }
    void show() const;
    int distance(const Date& date) const
    {
        return totalDays-date.totalDays;
    }
};
#endif