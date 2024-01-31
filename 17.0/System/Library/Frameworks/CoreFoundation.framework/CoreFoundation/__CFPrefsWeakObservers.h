@class next;

@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying> {
    struct __cfobservers_t { next *slot; struct __cfobservers_t *x0; } values;
    unsigned long long count;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)borrowObjects:(id *)a0 count:(unsigned long long)a1;
- (unsigned long long)approximateCount;
- (id)debugDescription;
- (unsigned char)removeObject:(id)a0;
- (unsigned char)addObject:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
