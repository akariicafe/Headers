@interface Swift._SwiftNSMutableArray : Swift._SwiftNativeNSMutableArray {
    void /* unknown type, empty encoding */ contents;
}

@property (nonatomic, readonly) long long count;

- (void)setObject:(id)a0 atIndexedSubscript:(long long)a1;
- (void)replaceObjectsInRange:(struct { long long x0; long long x1; })a0 withObjects:(const id *)a1 count:(long long)a2;
- (long long)indexOfObjectIdenticalTo:(id)a0;
- (void)removeObjectsInRange:(struct { long long x0; long long x1; })a0;
- (id)objectAtIndexedSubscript:(long long)a0;
- (void)removeAllObjects;
- (id)objectAtIndex:(long long)a0;
- (void)removeLastObject;
- (void)insertObject:(id)a0 atIndex:(long long)a1;
- (void)getObjects:(id *)a0 range:(struct { long long x0; long long x1; })a1;
- (void)replaceObjectAtIndex:(long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(long long)a0;
- (void)insertObjects:(const id *)a0 count:(long long)a1 atIndex:(long long)a2;
- (void)setObject:(id)a0 atIndex:(long long)a1;
- (void)exchangeObjectAtIndex:(long long)a0 withObjectAtIndex:(long long)a1;
- (void)addObject:(id)a0;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(long long)a2;
- (id)copyWithZone:(void *)a0;

@end
