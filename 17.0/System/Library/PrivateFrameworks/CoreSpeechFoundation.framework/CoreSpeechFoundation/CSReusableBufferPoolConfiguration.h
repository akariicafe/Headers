@interface CSReusableBufferPoolConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long backingStoreCapacity;
@property (readonly, nonatomic) unsigned long long minimalNumberOfBackingStores;
@property (readonly, nonatomic) unsigned long long maximumNumberOfBackingStores;
@property (readonly, nonatomic) double backingStoreIdleTimeout;

- (id)description;
- (id)initWithBackingStoreCapacity:(unsigned long long)a0 minimalNumberOfBackingStores:(unsigned long long)a1 maximumNumberOfBackingStores:(unsigned long long)a2 backingStoreIdleTimeout:(double)a3;

@end
