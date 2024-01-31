@interface _NSMoribundCache : NSCache

- (id)retain;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)retainCount;
- (void)removeAllObjects;
- (void)setName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)autorelease;
- (id)copy;
- (void)removeObjectForKey:(id)a0;
- (id)name;
- (void)setDelegate:(id)a0;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCountLimit:(unsigned long long)a0;
- (unsigned long long)countLimit;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (unsigned long long)totalCostLimit;

@end
