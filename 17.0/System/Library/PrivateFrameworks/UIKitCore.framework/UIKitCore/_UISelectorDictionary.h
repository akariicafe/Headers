@class NSArray, _UISelectorSet, NSMapTable;

@interface _UISelectorDictionary : NSObject <NSCopying> {
    NSMapTable *_map;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) _UISelectorSet *allSelectors;
@property (readonly, nonatomic) NSArray *allObjects;

- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateSelectorsAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithMap:(id)a0;
- (id)initWithMapping:(id /* block */)a0 objects:(id)a1;
- (id)objectForSelector:(SEL)a0;
- (void)removeObjectForSelector:(SEL)a0;
- (void)removeObjectsForSelectors:(id)a0;
- (void)setObject:(id)a0 forSelector:(SEL)a1;

@end
