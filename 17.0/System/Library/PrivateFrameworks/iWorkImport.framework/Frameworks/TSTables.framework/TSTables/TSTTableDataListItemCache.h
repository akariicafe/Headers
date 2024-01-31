@class NSMapTable, NSMutableArray;

@interface TSTTableDataListItemCache : NSObject {
    NSMapTable *_data;
    NSMutableArray *_strongRefs;
}

+ (id)cache;

- (id)init;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (void).cxx_destruct;
- (id)objectForKey:(unsigned int)a0;

@end
