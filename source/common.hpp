#ifdef RK_COMMON_INCLUDES
#define RK_COMMON_INCLUDES

#include<vector>

class cItem;

typedef enum item_type {
    NON_VEG = 0,
    VEG = 1
} eItemType;


using ItemList = std::vector< std::shared_ptr<cItem> >;

#define DBHOST localhost
#define DBUSER root
#define DBPASSWORD 1234
#define DBSCHEMA RKBILLINGDB

#endif // RK_COMMON_INCLUDES
