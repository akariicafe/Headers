@class SFSession;

@interface TRClientConnection : TRConnection

@property (retain) SFSession *session;

- (void)sendResponse:(id)a0;
- (void)setEventMessageHandler:(id /* block */)a0;
- (void)setInterruptionHandler:(id /* block */)a0;
- (void)invalidate;
- (id /* block */)eventMessageHandler;
- (id /* block */)requestMessageHandler;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (void)setRequestMessageHandler:(id /* block */)a0;
- (id /* block */)invalidationHandler;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)sendRequest:(id)a0;
- (id /* block */)interruptionHandler;
- (void)connectToNearbyDevice:(id)a0 withCompletion:(id /* block */)a1;

@end
