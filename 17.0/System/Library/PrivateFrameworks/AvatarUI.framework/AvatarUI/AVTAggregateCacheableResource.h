@class NSArray, NSString;

@interface AVTAggregateCacheableResource : NSObject <AVTCacheableResource>

@property (readonly, nonatomic) NSArray *cacheableResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)requiresEncryption;
- (unsigned long long)costForScope:(id)a0;
- (id)identifierForScope:(id)a0 persistent:(BOOL)a1;
- (id)initWithCacheableResources:(id)a0;
- (id)persistentIdentifierForScope:(id)a0;
- (id)volatileIdentifierForScope:(id)a0;

@end
