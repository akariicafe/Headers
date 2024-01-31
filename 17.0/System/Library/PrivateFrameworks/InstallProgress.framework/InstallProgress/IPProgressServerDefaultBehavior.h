@class NSString, IPServerXPCTransport, NSObject;
@protocol IPProgressServerBehaviorDelegate, OS_dispatch_queue, IPStateUpdateStreamSink;

@interface IPProgressServerDefaultBehavior : NSObject <IPProgressServerBehavior, IPServerXPCTransportDelegate, IPXPCClientDelegate> {
    IPServerXPCTransport *_transport;
    id<IPStateUpdateStreamSink> _stateSink;
}

@property (weak, nonatomic) id<IPProgressServerBehaviorDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (void).cxx_destruct;
- (id)activeInstallationsForClient:(id)a0;
- (id)allInstallableStatesForClient:(id)a0;
- (void)identityWasUninstalled:(id)a0;
- (id)initWithTransport:(id)a0 stateUpdateSink:(id)a1;
- (void)progressForIdentity:(id)a0 changed:(id)a1;
- (void)progressForIdentity:(id)a0 finishedWithState:(unsigned long long)a1;
- (id)progressForIdentity:(id)a0 forClient:(id)a1 error:(id *)a2;
- (void)progressForIdentityInitiated:(id)a0;
- (void)transport:(id)a0 acceptedClient:(id)a1;
- (void)transport:(id)a0 clientDisconnected:(id)a1;
- (id)transport:(id)a0 requestDelegateForClient:(id)a1;
- (BOOL)transport:(id)a0 shouldAcceptConnection:(id)a1;

@end
