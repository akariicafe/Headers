@class NSKeyValueNonmutatingSetMethodSet;

@interface NSKeyValueFastMutableSet1 : NSKeyValueFastMutableSet {
    NSKeyValueNonmutatingSetMethodSet *_nonmutatingMethods;
}

- (id)objectEnumerator;
- (void)_proxyNonGCFinalize;
- (id)member:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)count;

@end
