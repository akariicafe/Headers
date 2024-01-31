@class NSMutableArray;

@interface AKSparseMutableControllerArray : NSMutableArray {
    NSMutableArray *_backendArray;
}

- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeLastObject;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (void)_backFillUntilCount:(unsigned long long)a0;
- (BOOL)containsAnyObjects:(id)a0;

@end
