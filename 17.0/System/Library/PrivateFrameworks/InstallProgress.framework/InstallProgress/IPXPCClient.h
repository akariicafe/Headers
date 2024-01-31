@class NSString, IPServerXPCTransport, NSXPCConnection;
@protocol IPXPCClientDelegate;

@interface IPXPCClient : NSObject <IPXPCServerInterface> {
    NSXPCConnection *_connection;
    IPServerXPCTransport *_transport;
}

@property (weak, nonatomic) id<IPXPCClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (void).cxx_destruct;
- (void)actionBarrier:(id /* block */)a0;
- (id)asyncProxy:(id /* block */)a0;
- (void)getActiveInstallations:(id /* block */)a0;
- (void)getAllInstallableStates:(id /* block */)a0;
- (void)getProgressForIdentity:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnection:(id)a0 serviceQueue:(id)a1;
- (void)registerAsProgressObserver:(id /* block */)a0;
- (void)sendProgressEndForIdentity:(id)a0 reason:(unsigned long long)a1;
- (void)sendUpdateForIdentity:(id)a0 currentProgress:(id)a1;

@end
