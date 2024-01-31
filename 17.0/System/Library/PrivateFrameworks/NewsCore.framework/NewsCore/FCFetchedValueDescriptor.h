@class NSArray;
@protocol FCFetchedValueDescriptorObserving;

@interface FCFetchedValueDescriptor : NSObject

@property (readonly, nonatomic) NSArray *inputManagers;
@property (weak) id<FCFetchedValueDescriptorObserving> observer;

- (id)init;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valuePromiseWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1;

@end
