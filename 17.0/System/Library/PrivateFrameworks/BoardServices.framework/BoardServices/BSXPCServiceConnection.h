@class RBSTarget, NSString, BSXPCServiceConnectionContext, BSAuditToken, BSXPCServiceConnectionPeer, BSXPCServiceConnectionActivationMessage, NSObject, NSMutableArray, BSXPCServiceConnectionMessageReply, BSXPCServiceConnectionMessage, BSXPCServiceConnectionEventHandler;
@protocol BSXPCServiceConnectionParent, BSServiceDispatchingQueue, OS_xpc_object, OS_dispatch_queue;

@interface BSXPCServiceConnection : NSObject <BSXPCServiceConnectionParent, BSXPCServiceConnectionAuditTokenUpdater, BSInvalidatable> {
    NSString *_proem;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_activationGeneration;
    BSXPCServiceConnectionPeer *_lock_peer;
    BSAuditToken *_lock_auditToken;
    NSObject<OS_dispatch_queue> *_configured_underlyingTargetQueue;
    id<BSServiceDispatchingQueue> _configured_connectionQueue;
    NSObject<OS_xpc_object> *_lock_lastKnownConnection;
    NSObject<OS_xpc_object> *_lock_connection;
    NSMutableArray *_lock_childConnections;
    NSMutableArray *_lock_connectionActivatedEvents;
    NSMutableArray *_lock_connectionEstablishedEvents;
    BSXPCServiceConnectionActivationMessage *_lock_activationMessage;
    BSXPCServiceConnectionMessageReply *_lock_activationReply;
    BSXPCServiceConnectionMessage *_lock_invalidationMessage;
    BSXPCServiceConnectionEventHandler *_lock_eventHandler;
    id<BSXPCServiceConnectionParent> _lock_parent;
    BOOL _lock_configured;
    BOOL _lock_activated;
    BOOL _lock_sendsMustWaitForEstablished;
    BOOL _lock_established;
    BOOL _lock_remotelyInvalidated;
    BOOL _lock_clientInvalidated;
    BOOL _lock_clientInvalidatedExplicitly;
    BOOL _lock_invalidated;
    RBSTarget *_remoteAssertionTarget;
    BSXPCServiceConnectionContext *_context;
}

@property (readonly, nonatomic, getter=_isInvalidated) BOOL _invalidated;
@property (readonly, nonatomic, getter=_isClientInvalidated) BOOL _clientInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_invalidateChildConnection:(id)a0;
- (void)dealloc;
- (void)updateAuditTokenFromReplyMessage:(id)a0 fromActivationGeneration:(unsigned int)a1;
- (void)invalidate;
- (void).cxx_destruct;

@end
