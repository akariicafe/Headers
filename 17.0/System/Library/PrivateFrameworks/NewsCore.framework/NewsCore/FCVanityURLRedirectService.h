@class FCFetchedValueManager;
@protocol FCContentContext;

@interface FCVanityURLRedirectService : NSObject

@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) FCFetchedValueManager *vanityURLMappingManager;

- (id)init;
- (id)initWithContentContext:(id)a0;
- (void).cxx_destruct;
- (id)_destinationURLForURL:(id)a0;
- (void)acquireHoldTokenOnUnderlyingAssets;
- (id)destinationURLForURL:(id)a0;
- (BOOL)hasRedirectForURL:(id)a0;
- (void)resolveURL:(id)a0 withQualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void)updateUnderlyingMappingWithQualityOfService:(long long)a0 completion:(id /* block */)a1;

@end
