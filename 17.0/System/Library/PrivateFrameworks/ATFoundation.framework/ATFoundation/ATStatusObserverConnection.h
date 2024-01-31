@class NSString, NSXPCConnection;

@interface ATStatusObserverConnection : NSObject <ATStatusObserverConnectionProtocol, ATStatusMonitorObserver> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)connection:(id)a0 updatedAssets:(id)a1;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)fetchAllStatusWithCompletion:(id /* block */)a0;
- (void)monitor:(id)a0 didUpdateWithStatus:(id)a1;

@end
