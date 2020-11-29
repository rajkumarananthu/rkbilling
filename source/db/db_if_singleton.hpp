#ifndef RK_DB_SINGLETON_HPP
#define RK_DB_SINGLETON_HPP

#include "mysql_connection.h"
#include "common.hpp"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

// A singleton class to access the MySQL database
// uses libmysqlcppconn-dev package for this
class cDBSingleton {

    private:

        static std::shared_ptr<cDBSingleton> mDB;
        std::shared_ptr<sql::Driver> mDriver;
        std::shared_ptr<sql::Connection> mCon;
        std::shared_ptr<sql::Statement> mStmt;
        std::shared_ptr<sql::ResultSet> mResSet;

        ItemList mItemList; 

        cDBSingleton (void) {
            mDriver = nullptr;
            mCon = nullptr;
            mStmt = nullptr;
            mResSet = nullptr;
        }

    public:

        ~cDBSingleton () {
            delete mDB;
            if (mCon) delete mCon;
            if (mStmt) delete mStmt;
            if (mResSet) delete mResSet;
            mItemList.clear();
        }

        static std::shared_ptr<cDBSingleton> getInstance (void) {
            if (mDB == nullptr) {
                mDB = std::make_shared<cDBSingleton>();
            }
            return mDB;
        }

        void refreshItemList (void) const;

        void printItemList (void) const;

        void addItem (std::string itemName, unsigned int itemCost, char itemType);
};

#endif // RK_DB_SINGLETON_HPP
