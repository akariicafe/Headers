@class TSPAbstractMutableLargeArraySegment;

@interface TSPLargeArraySegmentWrapper : NSMutableArray {
    TSPAbstractMutableLargeArraySegment *_backingStore;
}

- (void)removeObjectsAtIndexes:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeLastObject;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWithLargeArraySegment:(id)a0;

@end
