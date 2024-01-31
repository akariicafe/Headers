@class NSString, NSMutableDictionary, NSMutableOrderedSet;

@interface MCMLRUCache : NSObject <MCMCache> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long maxCount;
@property (readonly, nonatomic) NSMutableDictionary *storage;
@property (readonly, nonatomic) NSMutableOrderedSet *mruItems;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithName:(id)a0 maxCount:(unsigned long long)a1;

@end
