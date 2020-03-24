#ifndef RK_ORDER_LIST_HPP
#define RK_ORDER_LIST_HPP

#include<vector>


// forward declarations
class cItem;

// 
class cOrderList {
    private:
        std::vector<cItem> mOrderList;
    public:
        //
	void addToList(cItem& item);
	//
	std::vector<cItem> getList();
};
#endif // RK_ORDER_LIST_HPP
