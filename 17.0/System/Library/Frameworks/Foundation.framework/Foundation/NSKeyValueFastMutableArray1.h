@class NSKeyValueNonmutatingArrayMethodSet;

@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray {
    NSKeyValueNonmutatingArrayMethodSet *_nonmutatingMethods;
}

- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)count;

@end
