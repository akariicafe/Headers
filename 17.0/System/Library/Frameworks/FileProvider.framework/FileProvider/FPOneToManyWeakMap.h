@class NSMutableDictionary;

@interface FPOneToManyWeakMap : NSObject {
    NSMutableDictionary *_backingDictionary;
}

- (id)init;
- (void)removeObjectsForKey:(id)a0;
- (void).cxx_destruct;
- (id)removeObject:(id)a0;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)anyObjectForKey:(id)a0;

@end
