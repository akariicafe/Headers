@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface LAAssertionsProxy : NSObject <LAAssertionsXPC> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isConnected;
- (void)setConnection:(id)a0;
- (void)setQueue:(id)a0;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dropTouchIdAssertion:(id /* block */)a0;
- (void)takeTouchIdAssertion:(id /* block */)a0;

@end
