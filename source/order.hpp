#ifndef RK_ORDER_HPP
#define RK_ORDER_HPP

#include "common.hpp"


class cOrder {
    private:
    // actual orde list for each order
    // only one instance of the mOrderList
    // we clear the ordeList once the order is confirmed
    ItemList mOrderList;

    // Total bill value
    unsigned int mBillValue;

    // tax percentage
    unsigned int mTax;

    unsigned int mDiscount;

    // gross bill
    unsigned float mGrossBill;

    // User-id
    // need to have an id

    public:

    cOrder() = default;

    bool addItem(std::string itemName);

    bool removeItem(std::string itemName);

    unsigned int calculateGrossBill();

    // this is to apply on the whole bill amount,
    // individual item discounts are based on the specific item discount
    void applyDiscount(unsigned int discount);

};

#endif // RK_ORDER_HPP

