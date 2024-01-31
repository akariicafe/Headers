@class AAFXPCSessionConfig, NSUUID, NSXPCConnection;
@protocol AAFXPCSessionDelegate;

@interface AAFXPCSession : NSObject

@property (readonly, nonatomic) AAFXPCSessionConfig *remoteServiceConfig;
@property (weak, nonatomic) id<AAFXPCSessionDelegate> delegate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSUUID *identifier;

- (void)suspend;
- (void)invalidate;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithRemoteServiceConfig:(id)a0 delegate:(id)a1;
- (id)remoteServiceProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteServiceProxy;
- (id)_unsafe_createNewConnection;
- (void)_unsafe_destroyXPCConnection;
- (id)syncRemoteServiceProxy;
- (id)syncRemoteServiceProxyWithErrorHandler:(id /* block */)a0;

@end
