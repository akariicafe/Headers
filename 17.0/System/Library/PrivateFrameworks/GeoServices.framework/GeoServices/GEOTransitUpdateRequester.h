@class geo_isolater, NSHashTable;

@interface GEOTransitUpdateRequester : NSObject {
    geo_isolater *_isolater;
    NSHashTable *_pendingRequests;
}

+ (id)sharedRequester;

- (id)init;
- (BOOL)_finishRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancelTransitRouteUpdateRequest:(id)a0;
- (void)startTransitRouteUpdateRequest:(id)a0 auditToken:(id)a1 throttleToken:(id)a2 queue:(id)a3 networkActivity:(id /* block */)a4 completion:(id /* block */)a5;

@end
