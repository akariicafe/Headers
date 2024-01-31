@interface GEOSpatialLookupRequester : GEOServiceRequester

+ (id)sharedInstance;

- (id)_validateResponse:(id)a0;
- (void)cancelRequest:(id)a0;
- (void)startWithRequest:(id)a0 traits:(id)a1 timeout:(double)a2 auditToken:(id)a3 completionHandler:(id /* block */)a4;

@end
