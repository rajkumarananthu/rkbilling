#ifndef RK_DB_SINGLETON_HPP
#define RK_DB_SINGLETON_HPP

#include "mysql_connection.h"

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

        cDBSingleton() {
            mDriver = nullptr;
            mCon = nullptr;
            mStmt = nullptr;
            mResSet = nullptr;
        }

    public:

        ~cDBSingleton() {
            delete mDB;
        }

        static std::shared_ptr<cDBSingleton> getInstance() {
            if (mDB == nullptr) {
                mDB = new cDBSingleton();
            }
            return mDB;
        }


};

#endif // RK_DB_SINGLETON_HPP
