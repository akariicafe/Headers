@class NSKeyValueSetter, NSKeyValueGetter;

@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueGetter *_baseGetter;
    NSKeyValueSetter *_baseSetter;
}

- (void)dealloc;
- (id)baseGetter;
- (id)baseSetter;
- (BOOL)treatNilValuesLikeEmptyCollections;
- (id)initWithContainerClassID:(id)a0 key:(id)a1 baseGetter:(id)a2 baseSetter:(id)a3 containerIsa:(Class)a4 proxyClass:(Class)a5;

@end
