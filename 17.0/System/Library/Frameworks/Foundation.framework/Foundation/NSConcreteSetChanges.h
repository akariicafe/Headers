@class NSSet, NSMutableArray;

@interface NSConcreteSetChanges : NSSetChanges {
    NSSet *_backing;
    NSMutableArray *_changes;
    BOOL _backingIsMutable;
}

- (void)setSet:(id)a0;
- (void)minusSet:(id)a0;
- (unsigned long long)changeCount;
- (id)objectEnumerator;
- (id)initWithSet:(id)a0;
- (id)init;
- (void)intersectSet:(id)a0;
- (id)member:(id)a0;
- (void)dealloc;
- (void)unionSet:(id)a0;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)_willChange;
- (void)addObjectsFromArray:(id)a0;
- (unsigned long long)count;
- (void)addChange:(id)a0;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_fault;
- (void)enumerateChanges:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateChangesUsingBlock:(id /* block */)a0;
- (void)filterObjectsWithTest:(id /* block */)a0;
- (void)transformObjectsWithBlock:(id /* block */)a0;

@end
