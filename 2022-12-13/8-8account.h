#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include "8-8date.h"
#include "8-8accumulator.h"
#include <string>
class Account
{ // �˻���
private:
    std::string id;      // �ʺ�
    double balance;      // ���
    static double total; // �����˻����ܽ��
protected:
    // ����������õĹ��캯��,idΪ�˻�
    Account(const Date &date, const std::string &id);
    // ��¼һ���ʣ�dateΪ���ڣ�amountΪ��descΪ˵��
    void record(const Date &date, double amount, const std::string &desc);
    // ���������Ϣ
    void error(const std::string &msg) const;

public:
    const std::string &getId() const { return id; }
    double getBalance() const { return balance; }
    static double getTotal() { return total; }
    // �����ֽ�dateΪ���ڣ�amountΪ��descΪ����˵��
    virtual void deposit(const Date &date, double amount, const std ::string &desc) = 0;
    // ȡ���ֽ�dateΪ����,amountΪ��descΪ����˵��
    virtual void withdraw(const Date &date, double amount, const std::string &desc) = 0;
    // ����(������Ϣ����ѵ�)��ÿ�½���һ�Σ�dateΪ��������
    virtual void settle(const Date &date) = 0;
    // ��ʾ�˻���Ϣ
    virtual void show() const;
};
class SavingsAccount : public Account
{
private:
    Accumulator acc;
    double rate;

public:
    SavingsAccount(const Date &date, const std::string &id, double rate);
    void deposit(const Date &date, double amount, const std::string &desc);
    void withdraw(const Date &date, double amount, const std::string &desc);
    void settle(const Date &date);
};
class CreditAccount : public Account
{
private:
    Accumulator acc;
    double credit;
    double rate;
    double fee;
    double getDebt() const
    {
        double balance = getBalance();
        return (balance < 0 ? balance : 0);
    }

public:
    CreditAccount(const Date &date, const std::string &id, double credit, double rate, double fee);
    double getCredit() const { return credit; }
    double getRate() const { return rate; }
    double getFee() const { return fee; }
    double getAvailableCredit() const
    {
        if (getBalance() < 0)
        {
            return credit + getBalance();
        }
        else
            return credit;
    }
    void deposit(const Date &date, double amount, const std::string &desc);
    void withdraw(const Date &date, double amount, const std::string &desc);
    void settle(const Date &date);
    void show() const;
};
#endif