@class NSKeyValueSetter, NSKeyValueGetter;

@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptyOrderedSets;
    char _padding[3];
}

- (void)_proxyNonGCFinalize;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (unsigned long long)indexOfObject:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)removeObjectsAtIndexes:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)count;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)_raiseNilValueExceptionWithSelector:(SEL)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)a0;
- (id)_nonNilOrderedSetValueWithSelector:(SEL)a0;

@end
