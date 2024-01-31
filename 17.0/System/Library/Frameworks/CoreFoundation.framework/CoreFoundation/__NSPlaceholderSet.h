@interface __NSPlaceholderSet : NSMutableSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)objectEnumerator;
- (id)retain;
- (id)init;
- (id)member:(id)a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (oneway void)release;

@end
