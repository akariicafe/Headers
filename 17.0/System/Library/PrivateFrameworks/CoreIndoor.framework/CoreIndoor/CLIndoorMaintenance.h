@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (void)onQueueNumFloors:(id /* block */)a0;
- (void)onQueuePrefetch:(id)a0 callback:(id /* block */)a1 when:(unsigned char)a2;
- (void)eraseEverything;
- (BOOL)withinQueueCanReinitializeRemoteState;
- (id)endpointName;
- (id)remoteObjectProtocol;
- (id)withinQueuePermanentShutdownReason;
- (void)withinQueueReinitializeRemoteState;
- (void)prefetchSynchronous:(id)a0;
- (void)prefetch:(id)a0;
- (void)onQueueEraseEverything:(id /* block */)a0;
- (void)onQueueShutdown;
- (void)doSynchronousXPC:(id /* block */)a0 description:(const char *)a1 waitForever:(BOOL)a2;
- (void)numFloors:(id /* block */)a0;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)a0;
- (void)retrieveLocationRelevancyDurationWithCompletionHandler:(id /* block */)a0;
- (void)withinQueueInvalidateState;

@end
