@class NSMutableArray;

@interface __NSOrderedSetM : NSMutableOrderedSet {
    _Atomic struct __cow_state_t *cow;
    struct { struct __CFBasicHash *set; NSMutableArray *array; } storage;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)_mutate;
- (unsigned long long)countForObject:(id)a0;
- (void)dealloc;
- (unsigned long long)indexOfObject:(id)a0;
- (void)removeAllObjects;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)containsObject:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopy;
- (unsigned long long)count;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)copy;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
