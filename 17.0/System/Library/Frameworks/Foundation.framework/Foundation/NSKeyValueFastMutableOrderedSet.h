@class NSKeyValueMutatingOrderedSetMethodSet;

@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet {
    NSKeyValueMutatingOrderedSetMethodSet *_mutatingMethods;
}

- (void)_proxyNonGCFinalize;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;

@end
