@class SHStorefront;

@interface SHOffersNetworkRequester : NSObject

@property (readonly, nonatomic) SHStorefront *storefront;

- (void).cxx_destruct;
- (id)endpointURLWithHost:(id)a0 path:(id)a1 storefront:(id)a2;
- (void)fetchOffersAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)offersWithCompletion:(id /* block */)a0;

@end
