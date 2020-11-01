#ifdef RK_COMMON_INCLUDES
#define RK_COMMON_INCLUDES

#include<vector>

class cItem;

typedef enum item_type {
    NON_VEG = 0,
    VEG = 1
} eItemType;


using ItemList = std::vector< std::shared_ptr<cItem> >;

#endif // RK_COMMON_INCLUDES
