@class FCFetchedValueManager;
@protocol FCContentContext;

@interface FCHeldPBCodableFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) Class codableClass;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) FCFetchedValueManager *resourceConfigurationManager;

- (id)init;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)initWithCodableClass:(Class)a0 contentContext:(id)a1 resourceConfigurationManager:(id)a2;
- (void).cxx_destruct;
- (void)_processFetchOperationResult:(id)a0 withBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)inputManagers;

@end
