@class NSString, geo_isolater, NSMapTable;

@interface GEODirectionsRequesterRemoteProxy : NSObject <_GEODirectionsRequesterServerProxy> {
    geo_isolater *_isolater;
    NSMapTable *_pendingRequestConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cancelRequest:(id)a0;
- (void).cxx_destruct;
- (id)_takeConnectionForRequest:(id)a0;
- (void)startRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 useBackgroundURL:(BOOL)a3 requestPriority:(id)a4 callbackQueue:(id)a5 finished:(id /* block */)a6 networkActivity:(id /* block */)a7 error:(id /* block */)a8;

@end
