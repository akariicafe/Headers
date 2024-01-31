@class NSKeyValueMutatingCollectionMethodSet, NSKeyValueGetter;

@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter {
    NSKeyValueGetter *_baseGetter;
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;
}

- (void)dealloc;
- (id)mutatingMethods;
- (id)baseGetter;
- (id)initWithContainerClassID:(id)a0 key:(id)a1 baseGetter:(id)a2 mutatingMethods:(id)a3 proxyClass:(Class)a4;

@end
