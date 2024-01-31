@protocol _GEODirectionsRequesterServerProxy;

@interface GEODirectionsRequester : NSObject {
    id<_GEODirectionsRequesterServerProxy> _serverProxy;
}

+ (id)sharedRequester;
+ (void)useRemoteProxy;
+ (void)useProxy:(Class)a0;

- (id)init;
- (void)cancelRequest:(id)a0;
- (void).cxx_destruct;
- (void)finalizeRequest:(id)a0;
- (void)startRequest:(id)a0 callbackQueue:(id)a1 finished:(id /* block */)a2 networkActivity:(id /* block */)a3 error:(id /* block */)a4;
- (void)startRequest:(id)a0 finished:(id /* block */)a1 networkActivity:(id /* block */)a2 error:(id /* block */)a3;
- (void)startRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 callbackQueue:(id)a3 finished:(id /* block */)a4 networkActivity:(id /* block */)a5 error:(id /* block */)a6;
- (void)startRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 skipFinalize:(BOOL)a3 useBackgroundURL:(BOOL)a4 requestPriority:(id)a5 callbackQueue:(id)a6 finished:(id /* block */)a7 networkActivity:(id /* block */)a8 error:(id /* block */)a9;
- (void)startRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 skipFinalize:(BOOL)a3 useBackgroundURL:(BOOL)a4 requestPriority:(id)a5 finished:(id /* block */)a6 networkActivity:(id /* block */)a7 error:(id /* block */)a8;
- (void)startRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 useBackgroundURL:(BOOL)a3 callbackQueue:(id)a4 finished:(id /* block */)a5 networkActivity:(id /* block */)a6 error:(id /* block */)a7;

@end
