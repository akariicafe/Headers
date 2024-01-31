@class NSMutableArray, PKLRUCacheItem, NSMapTable;

@interface PKLRUCache : NSObject {
    PKLRUCacheItem *_firstItem;
    PKLRUCacheItem *_lastItem;
    PKLRUCacheItem *_freeItems;
    NSMapTable *_itemTable;
    unsigned long long _currentCost;
    NSMutableArray *_freeKeys;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _totalCostLimit;
    long long _freeItemCount;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
