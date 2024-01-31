@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) FCFetchedValueManager *configurationManager;

- (id)init;
- (id)initWithConfigurationManager:(id)a0;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_vanityURLConfiguration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)inputManagers;

@end
