#ifndef _ACCUMULATOR_H_
#define _ACCUMULATOR_H_
#include "8-8date.h"
class Accumulator
{ // ��ĳ����ֵ�����ۼ�
private:
    Date lastDate; // �ϴα����ֵ��ʱ��
    double value;  // ��ֵ�ĵ�ǰֵ
    double sum;    // ��ֵ�����ۼ�֮��
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
