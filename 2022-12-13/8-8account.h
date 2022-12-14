#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include "8-8date.h"
#include "8-8accumulator.h"
#include <string>
class Account
{ // 账户类
private:
    std::string id;      // 帐号
    double balance;      // 余额
    static double total; // 所有账户的总金额
protected:
    // 供派生类调用的构造函数,id为账户
    Account(const Date &date, const std::string &id);
    // 记录一笔帐，date为日期，amount为金额，desc为说明
    void record(const Date &date, double amount, const std::string &desc);
    // 报告错误信息
    void error(const std::string &msg) const;

public:
    const std::string &getId() const { return id; }
    double getBalance() const { return balance; }
    static double getTotal() { return total; }
    // 存入现金，date为日期，amount为金额，desc为款项说明
    virtual void deposit(const Date &date, double amount, const std ::string &desc) = 0;
    // 取出现金，date为日期,amount为金额，desc为款项说明
    virtual void withdraw(const Date &date, double amount, const std::string &desc) = 0;
    // 结算(计算利息、年费等)，每月结算一次，date为结算日期
    virtual void settle(const Date &date) = 0;
    // 显示账户信息
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