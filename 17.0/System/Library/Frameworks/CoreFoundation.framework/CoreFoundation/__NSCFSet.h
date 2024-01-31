@interface __NSCFSet : NSMutableSet {
    unsigned char _cfinfo[4];
    unsigned int _rc;
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)objectEnumerator;
- (id)retain;
- (unsigned long long)hash;
- (id)member:(id)a0;
- (unsigned long long)retainCount;
- (unsigned long long)_trueCount;
- (void)removeAllObjects;
- (unsigned long long)count;
- (BOOL)_tryRetain;
- (void)getObjects:(id *)a0;
- (Class)classForCoder;
- (id)description;
- (BOOL)_isDeallocating;
- (void)removeObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
