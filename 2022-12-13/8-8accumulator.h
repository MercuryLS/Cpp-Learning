#ifndef _ACCUMULATOR_H_
#define _ACCUMULATOR_H_
#include "8-8date.h"
class Accumulator
{ // 将某个数值按日累加
private:
    Date lastDate; // 上次变更数值的时期
    double value;  // 数值的当前值
    double sum;    // 数值按日累加之和
public:
    Accumulator(const Date &date,double value):lastDate(date),value(value),sum(0){}
    double getSum(const Date &date) const
    {
        return sum + value * (date - lastDate);
    };
    void change(const Date &date,double value){
        sum=getSum(date);
        lastDate=date;
        this->value=value;
    }
    void reset(const Date &date,double value){
        lastDate=date;
        this->value=value;
        sum=0;
    }
};
#endif
