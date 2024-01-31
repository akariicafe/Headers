@class NSString, NSXPCListener, NSMutableDictionary;

@interface ATSessionServerListener : NSObject <NSXPCListenerDelegate, ATSessionServer> {
    NSXPCListener *_listener;
    NSMutableDictionary *_sessionProxiesBySessionID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSessionServer;

- (id)init;
- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stop;
- (void)fetchActiveSessionCountForSessionTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)removeSession:(id)a0;
- (void)_dumpDebugInformation;
- (void)addSession:(id)a0;
- (void)cancelSessionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchSessionsWithTypeIdentifier:(id)a0 completion:(id /* block */)a1;

@end
