#ifndef RK_BILLING_IF_SINGLETON_HPP
#define RK_BILLING_IF_SINGLETON_HPP

// a class which is used by graphical interface
// created as singleton because, one billing interface is enough
// for any billing
class cBillingIfSingleton {
    private:
    // actual orde list for each order
    // only one instance of the mOrderList
    // we clear the ordeList once the order is confirmed
    cOrderList orderList;
    // as it is a singleton class the constuctor is private
    cBillingIfSingleton();
    public:
    // 
    ~cBillingIfSingleton();
};

#endif // RK_BILLING_IF_SINGLETON_HPP
