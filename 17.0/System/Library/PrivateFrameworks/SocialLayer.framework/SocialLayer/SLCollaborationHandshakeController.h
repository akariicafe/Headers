@class SLRemoteTaskManager, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SLCollaborationHandshakeController : SLDServiceProxy <SLRemoteTaskManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetSerialQueue;
@property (retain, nonatomic) SLRemoteTaskManager *taskManager;
@property (nonatomic) BOOL synchronous;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_sandboxExtensionIssueFileURL:(id)a0 withAuditToken:(struct { unsigned int x0[8]; })a1;
- (void).cxx_destruct;
- (id)initWithTargetSerialQueue:(id)a0 synchronous:(BOOL)a1;
- (void)startCollaborationWithMetadata:(id)a0 participants:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)addParticipantHandles:(id)a0 withFileURL:(id)a1 metadata:(id)a2 timeout:(double)a3 completion:(id /* block */)a4;
- (void)addParticipantHandles:(id)a0 withMetadata:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)removeParticipantIdentities:(id)a0 withFileURL:(id)a1 metadata:(id)a2 timeout:(double)a3 completion:(id /* block */)a4;
- (void)removeParticipantIdentities:(id)a0 withMetadata:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)startCollaborationWithFileURL:(id)a0 metadata:(id)a1 participants:(id)a2 timeout:(double)a3 completion:(id /* block */)a4;
- (void)verifySourceBundleIdentifierFromMetadata:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (id)_handshakeService;
- (void)generateProofForIdentity:(id)a0 collaborationIdentifier:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (id)taskServiceWithErrorHandler:(id /* block */)a0;

@end
