#pragma once
#include "Order.h"
class InsuredOrder :
    public Order
{
protected:
    string company;
    double amount;
public:
    InsuredOrder(Date date, Time_ time, int id, string company, double amount);
    ~InsuredOrder();
    void setCompany(string company);
    string getCompany()const&;

    void setAmount(double amount);
    double getAmount()const&;

    string toString()override;
};

