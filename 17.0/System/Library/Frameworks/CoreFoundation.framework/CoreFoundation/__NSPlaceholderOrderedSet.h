@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (unsigned long long)indexOfObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (oneway void)release;

@end
