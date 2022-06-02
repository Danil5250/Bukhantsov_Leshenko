#pragma once
#include "Order.h"

class OrdinaryOrder :
    public Order
{
public:
    OrdinaryOrder(Date date, Time_ time, int id);
    ~OrdinaryOrder();

    string toString();
};

