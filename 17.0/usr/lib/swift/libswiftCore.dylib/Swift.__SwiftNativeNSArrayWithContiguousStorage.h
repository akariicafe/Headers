@interface Swift.__SwiftNativeNSArrayWithContiguousStorage : Swift.__SwiftNativeNSArray

@property (nonatomic, readonly) long long count;

- (id)objectAtIndexedSubscript:(long long)a0;
- (id)objectAtIndex:(long long)a0;
- (void)getObjects:(id *)a0 range:(struct { long long x0; long long x1; })a1;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(long long)a2;
- (id)copyWithZone:(void *)a0;

@end
