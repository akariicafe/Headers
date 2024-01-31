@class NSXPCConnection, DADiscovery, _EXExtensionIdentity, NSObject;
@protocol OS_dispatch_queue;

@interface DADiscoveryExtension : NSObject <DADiscoveryExtensionXPCProtocolHost> {
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) _EXExtensionIdentity *ekExtension;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) DADiscovery *parent;

- (void)_activate;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)reportEvent:(id)a0;
- (void)reportEventToExtension:(id)a0;

@end
