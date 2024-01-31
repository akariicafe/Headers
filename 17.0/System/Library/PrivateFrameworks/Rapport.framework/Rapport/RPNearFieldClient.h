@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPNearFieldClient : NSObject <RPNearFieldXPCClientInterfaceOld> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (readonly, nonatomic) NSXPCConnection *xpcCnx;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ tapEventHandler;
@property (copy, nonatomic) id /* block */ failedDiscovery;
@property (copy, nonatomic) id /* block */ connectionEstablishedHandler;

- (id)init;
- (void)didConnect;
- (id)_ensureXPCStarted;
- (void)_invalidated;
- (void)invalidate;
- (id)_XPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)stopWithCompletion:(id /* block */)a0;
- (void)failDiscoveryWithError:(id)a0;
- (void)receivedAlwaysOnEventWithSuggestedRole:(unsigned int)a0;
- (void)receivedTapEvent:(id)a0;

@end
