@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (id)objectEnumerator;
- (id)member:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithOrderedSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
