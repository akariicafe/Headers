@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface XRMobileAgentQueueStop : NSObject <XRMobileAgentStop> {
    NSObject<OS_dispatch_queue> *_funnelQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    int _diagnosticID;
    BOOL _holdIsPossible;
}

@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)backgroundQueueStop;
+ (id)mainQueueStop;
+ (id)userInitiatedQueueStop;
+ (id)userInteractiveQueueStop;
+ (id)utilityQueueStop;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)_escortAgentToExit:(id)a0 withTicket:(id)a1;
- (id)_funnelQueue;
- (BOOL)_holdReceivedAgent:(id)a0 ticket:(id)a1;
- (void)_prepareAgentToExecute:(id)a0 withTicket:(id)a1;
- (void)_welcomeAgent:(id)a0;
- (id)initWithDispatchQueue:(id)a0 funnelTarget:(id)a1;
- (void)_welcomeAgent:(id)a0 followedByAgents:(id)a1;
- (void)_welcomeAgents:(id)a0;
- (void)_executeAgent:(id)a0;
- (void)_executeWelcomeForAgent:(id)a0;
- (void)_runAgentEpilogue:(id)a0;
- (void)_runAgentPrologue:(id)a0;
- (id)initWithMainQueue;
- (void)receiveMobileAgent:(id)a0;

@end
