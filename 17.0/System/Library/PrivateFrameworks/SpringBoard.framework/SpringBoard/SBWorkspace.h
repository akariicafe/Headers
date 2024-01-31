@class FBWorkspaceEventQueue, SBWorkspaceTransaction, NSString;

@interface SBWorkspace : NSObject <SBIdleTimerProviding, SBIdleTimerCoordinating>

@property (readonly, nonatomic) FBWorkspaceEventQueue *eventQueue;
@property (readonly, nonatomic) SBWorkspaceTransaction *currentTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainWorkspace;

- (BOOL)requestTransitionWithOptions:(unsigned long long)a0 builder:(id /* block */)a1 validator:(id /* block */)a2;
- (BOOL)_executeTransitionRequest:(id)a0 options:(unsigned long long)a1 validator:(id /* block */)a2;
- (id)initWithEventQueue:(id)a0;
- (id)createRequestWithOptions:(unsigned long long)a0;
- (BOOL)requestTransitionWithBuilder:(id /* block */)a0;
- (id)createRequestWithOptions:(unsigned long long)a0 displayConfiguration:(id)a1;
- (id)transactionForTransitionRequest:(id)a0;
- (BOOL)requestTransitionWithOptions:(unsigned long long)a0 displayConfiguration:(id)a1 builder:(id /* block */)a2;
- (BOOL)executeTransitionRequest:(id)a0;
- (id)init;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (id)createRequestForApplicationActivation:(id)a0 options:(unsigned long long)a1;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (void).cxx_destruct;
- (id)createRequestForApplicationActivation:(id)a0 withDisplayConfiguration:(id)a1 options:(unsigned long long)a2;
- (BOOL)executeTransitionRequest:(id)a0 withValidator:(id /* block */)a1;
- (BOOL)requestTransitionWithOptions:(unsigned long long)a0 displayConfiguration:(id)a1 builder:(id /* block */)a2 validator:(id /* block */)a3;

@end
