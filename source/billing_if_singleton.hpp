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
    std::shared_ptr< cOrderList > mOrderList;

    // we will get this list each time
    // we create the cBillingIfSingleton object and when refresh is asked
    std::map< std::string, std::shared_ptr<cItem> > mItemList;

    //
    std::shared_ptr<cBillingIfSingleton> mBillingIfPtr;

    // as it is a singleton class the constuctor is private
    cBillingIfSingleton() {
        mOrderList = new cOrderList();
    }

    public:
    // 
    ~cBillingIfSingleton() {
        delete mOrderList;
    }

    //
    static std::shared_ptr<cBillingIfSingleton> getBillingIf () {
        if (mBillingIfPtr == nullptr) {
            mBillingIfPtr = new cBillingIfSingleton();
        }
        return mBillingIfPtr;
    }

    // use db_if to connect to DB and get the names
    // we will save the list of names in the member variable to reduce the number of time DB is
    // accessed
    std::vector<std::string> getItemNames();

    //
    void refreshItemList ();
};

#endif // RK_BILLING_IF_SINGLETON_HPP
