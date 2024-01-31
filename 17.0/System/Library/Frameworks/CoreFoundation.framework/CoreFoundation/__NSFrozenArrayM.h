@class offset;

@interface __NSFrozenArrayM : NSArray {
    _Atomic struct __cow_state_t *cow;
    struct { offset **list; unsigned int x0; unsigned int size; union { unsigned long long mutations; struct { unsigned int muts; unsigned int used; } ; } state; } storage;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopy;
- (unsigned long long)count;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copy;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
