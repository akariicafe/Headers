@class state;

@interface __NSFrozenSetM : NSSet {
    struct { state **objs; union { unsigned long long mutations; struct { unsigned int muts; unsigned int used : 26; unsigned char szidx : 6; } ; } x0; } storage;
    _Atomic struct __cow_state_t *cow;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)objectEnumerator;
- (unsigned long long)countForObject:(id)a0;
- (id)member:(id)a0;
- (void)dealloc;
- (BOOL)containsObject:(id)a0;
- (id)mutableCopy;
- (unsigned long long)count;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copy;
- (void)getObjects:(id *)a0 count:(unsigned long long)a1;
- (double)clumpingInterestingThreshold;
- (double)clumpingFactor;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
