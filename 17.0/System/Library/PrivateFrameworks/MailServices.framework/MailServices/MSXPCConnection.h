@class Protocol, EFPromise, NSXPCInterface, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface MSXPCConnection : NSXPCConnection {
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    EFPromise *_connectionPromise;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    long long _resumeCount;
    _Atomic BOOL _locallyInvalidated;
}

@property (readonly, retain, nonatomic) Protocol *protocol;
@property (nonatomic) BOOL shouldLaunchMobileMail;

- (id)exportedInterface;
- (id)initWithProtocol:(id)a0;
- (id)remoteObjectInterface;
- (id)_connection;
- (void)dealloc;
- (void)_invokeInterruptionHandlerForPromise:(id)a0;
- (void)suspend;
- (void)setInterruptionHandler:(id /* block */)a0;
- (unsigned int)effectiveUserIdentifier;
- (id)exportedObject;
- (id)_connectionForPromise:(id)a0;
- (unsigned int)effectiveGroupIdentifier;
- (void)_sendInvocation:(id)a0 remoteInterface:(id)a1 remoteProxy:(id)a2 errorHandler:(id /* block */)a3;
- (void)invalidate;
- (void)_finishPromise:(id)a0 withConnection:(id)a1 error:(id)a2;
- (id)remoteObjectProxy;
- (void)setExportedObject:(id)a0;
- (int)auditSessionIdentifier;
- (void)_queue_invokeInvalidationHandler;
- (void)setExportedInterface:(id)a0;
- (void)setRemoteObjectInterface:(id)a0;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (id)description;
- (void)resume;
- (void)_invalidatePromise:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id /* block */)invalidationHandler;
- (void)setInvalidationHandler:(id /* block */)a0;
- (int)processIdentifier;
- (id /* block */)interruptionHandler;

@end
