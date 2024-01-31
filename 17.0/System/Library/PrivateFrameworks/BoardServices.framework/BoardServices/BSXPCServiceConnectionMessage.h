@class NSString, NSObject;
@protocol BSXPCServiceConnectionHandshake, BSXPCServiceConnectionAuditTokenUpdater, BSServiceDispatchingQueue, OS_dispatch_queue;

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_targetQueue;
    id<BSXPCServiceConnectionHandshake> _handshake;
    int _sendFlag;
    unsigned int _activationGeneration;
    id<BSXPCServiceConnectionAuditTokenUpdater> _auditTokenUpdater;
    BOOL _notification;
    id /* block */ _completion;
    id<BSServiceDispatchingQueue> _replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)send;
- (void)invalidate;
- (BOOL)expectsReply;
- (BOOL)sendSynchronously;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)sendSynchronouslyWithError:(out id *)a0;
- (id)createReply;

@end
