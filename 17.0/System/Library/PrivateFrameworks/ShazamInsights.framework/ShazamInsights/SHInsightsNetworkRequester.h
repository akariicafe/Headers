@class NSString;

@interface SHInsightsNetworkRequester : NSObject <SHNetworkRequester>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadResourceFromRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)response:(id)a0 data:(id)a1 error:(id)a2;

@end
