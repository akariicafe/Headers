@class NSMutableDictionary, NSMutableArray;

@interface LiveFSLRUCache : NSObject {
    int _countLimit;
}

@property (retain) NSMutableDictionary *mapping;
@property (retain) NSMutableArray *usageOrder;
@property int countLimit;

- (id)init;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)objectForKeyLocked:(id)a0;
- (void)removeLastItem;

@end
