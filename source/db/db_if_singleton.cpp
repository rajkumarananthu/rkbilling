#include "db_if_singleton.hpp"
    
static cDBSingleton::mDB = nullptr;

void cDBSingleton::refreshItemList (void) const {

    mItemList.clear();
    mDriver = get_driver_instance();
    mCon = mDriver->connect(DBHOST, DBUSER, DBPASSWORD);
    
    mCon->setSchema(DBSCHEMA);
    mStmt = mCon->createStatement();
    mResSet = mStmt->executeQuery("SELECT * FROM ITEMS");

    if (!mResSet) {
        std::cout<<"EMPTY RESULT SET WHILE REFRESHING THE ITEM LIST\n";
        return;
    }
    while (mResSet->next()) {
       std::shared_ptr<cItem> item =
                    std::make_shared<cItem>(mResSet->getInt("ItemId"), 
                                            mResSet->getString("ItemName"), 
                                            mResSet->getInt("ItemCost"), 
                                            mResSet->getString("ItemType"));
        mItemList.push_back(item);
    }
}

void cDBSingleton::printItemList (void) const {

    for (auto item : mItemList) {
        std::cout<<"Id: "<<item->id()<<" Name: "<<item->name()
                 <<" Cost: "<<item->cost()<<" Type: "<<item->typeInString()<<"\n";
    }
}
