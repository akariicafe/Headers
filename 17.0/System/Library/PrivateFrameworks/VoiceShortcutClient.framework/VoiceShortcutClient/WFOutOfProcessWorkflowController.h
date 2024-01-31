@class NSXPCConnection, WFWorkflowDescriptor, NSString, WFOutOfProcessWorkflowControllerStateMachine, WFDialogAttribution, WFWorkflowRunRequest, WFWorkflowRunningContext, WFSandboxExtensionManager;
@protocol WFOutOfProcessWorkflowControllerVendor, WFOutOfProcessWorkflowControllerDelegate;

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerStateMachineDelegate, WFOutOfProcessWorkflowControllerHost>

@property (retain, nonatomic) id<WFOutOfProcessWorkflowControllerVendor> runner;
@property (readonly, nonatomic) long long environment;
@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) WFWorkflowRunRequest *runRequest;
@property (retain, nonatomic) WFWorkflowDescriptor *currentWorkflow;
@property (nonatomic) BOOL isAutomation;
@property (copy, nonatomic) WFDialogAttribution *currentDialogAttribution;
@property (readonly, nonatomic) WFSandboxExtensionManager *sandboxExtensionManager;
@property (readonly, nonatomic) WFOutOfProcessWorkflowControllerStateMachine *stateMachine;
@property (weak, nonatomic) id<WFOutOfProcessWorkflowControllerDelegate> delegate;
@property (nonatomic) long long presentationMode;
@property (readonly, copy, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)resumeRunningWithRequest:(id)a0 error:(out id *)a1;
- (id)asynchronousRunnerWithError:(out id *)a0 reason:(id)a1;
- (void)controllerStateMachine:(id)a0 didFinishRunningShortcutWithResult:(id)a1;
- (void)controllerStateMachine:(id)a0 didRequestStoppingShortcutWithError:(id)a1;
- (void)controllerStateMachine:(id)a0 shouldNotifyDelegateWithResult:(id)a1 currentDialogAttribution:(id)a2;
- (void)controllerStateMachineDidRequestRunnerTearDown:(id)a0;
- (void)getCurrentProgressCompletedWithCompletionHandler:(id /* block */)a0;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)a0 withIdentifier:(id)a1;
- (id)initWithEnvironment:(long long)a0 runningContext:(id)a1 presentationMode:(long long)a2;
- (id)initWithEnvironment:(long long)a0 runningContext:(id)a1 presentationMode:(long long)a2 existingConnection:(id)a3;
- (id)localizedTimeoutErrorDescription;
- (id)localizedXPCInterruptionErrorDescription;
- (void)pauseWorkflowAndWriteStateToDisk;
- (void)presenterRequestedUpdatedRunViewSource:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)runActionWithRunRequestData:(id)a0 error:(out id *)a1;
- (BOOL)runWorkflowWithDescriptor:(id)a0 request:(id)a1 error:(out id *)a2;
- (void)runnerDidPunchToShortcutsJr;
- (void)runnerWillExit;
- (id)runnerWithError:(out id *)a0 synchronous:(BOOL)a1 reason:(id)a2;
- (id)synchronousRunnerWithError:(out id *)a0 reason:(id)a1;
- (void)updateRunViewSource:(id)a0;
- (void)workflowDidPause;
- (void)workflowDidStartRunning:(id)a0 isAutomation:(BOOL)a1 dialogAttribution:(id)a2;

@end
