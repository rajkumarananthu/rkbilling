#ifndef RK_BILLING_SINGLETON_HPP
#define RK_BILLING_SINGLETON_HPP

#include "common.hpp"

// a class which is used by graphical interface
// created as singleton because, one billing interface is enough
// for any billing
class cBillingSingleton {
    private:
    // actual orde list for each order
    // only one instance of the mOrderList
    // we clear the ordeList once the order is confirmed
    ItemList mOrderList;

    // we will get this list each time
    // we create the cBillingSingleton object and when refresh is asked
    // this is to reduce to the cost of query to the DB each time
    // so we refresh this list, using the GUI option (planned)
    ItemList mItemList;

    //
    std::shared_ptr<cDBSingleton> mDB;

    //
    std::shared_ptr<cBillingSingleton> mBillingPtr;

    // as it is a singleton class the constuctor is private
    cBillingSingleton() {
        mOrderList = new cOrderList();
        mDB = cDBSingleton::getDBSingleton();
    }

    public:
    // 
    ~cBillingSingleton() {
        delete mOrderList;
    }

    //
    static std::shared_ptr<cBillingSingleton> getBillingPtr () {
        if (mBillingPtr == nullptr) {
            mBillingPtr = new cBillingSingleton();
        }
        return mBillingPtr;
    }

    //
    void refreshItemList ();
};

#endif // RK_BILLING_SINGLETON_HPP
