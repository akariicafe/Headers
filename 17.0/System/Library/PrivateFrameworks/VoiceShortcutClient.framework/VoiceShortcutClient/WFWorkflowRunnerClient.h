@class NSString, WFWorkflowRunViewSource, WFOutOfProcessWorkflowController, WFWorkflowRunDescriptor, NSObject, WFWorkflowRunRequest, WFWorkflowRunningContext;
@protocol OS_dispatch_queue, WFWorkflowRunnerClientDelegate;

@interface WFWorkflowRunnerClient : NSObject <WFOutOfProcessWorkflowControllerDelegate> {
    WFWorkflowRunnerClient *_strongSelf;
}

@property (retain, nonatomic) id progressSubscriber;
@property (retain, nonatomic) WFOutOfProcessWorkflowController *workflowController;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) WFWorkflowRunDescriptor *descriptor;
@property (retain, nonatomic) WFWorkflowRunRequest *runRequest;
@property (retain, nonatomic) WFWorkflowRunningContext *context;
@property (weak, nonatomic) id<WFWorkflowRunnerClientDelegate> delegate;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (copy, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)underlyingErrorIfRunnerError:(id)a0;

- (void)pause;
- (void)start;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (void)autoreleaseSelf;
- (void)beginObservingProgressForWorkflowWithRunningContext:(id)a0;
- (id)createRunningContextFromRequestIfNecessary:(id)a0 descriptor:(id)a1;
- (id)createWorkflowControllerWithContext:(id)a0;
- (void)dispatchWorkflowResultHandlingWithResult:(id)a0;
- (void)handleWorkflowDidStart:(id)a0;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithDescriptor:(id)a0 runRequest:(id)a1;
- (id)initWithDescriptor:(id)a0 runRequest:(id)a1 delegateQueue:(id)a2;
- (void)outOfProcessWorkflowController:(id)a0 didFinishWithResult:(id)a1 dialogAttribution:(id)a2;
- (void)outOfProcessWorkflowController:(id)a0 didRequestUpdatedRunViewSource:(id)a1 completionHandler:(id /* block */)a2;
- (void)outOfProcessWorkflowController:(id)a0 didStartFromWorkflowReference:(id)a1 dialogAttribution:(id)a2;
- (id)prewarmManager;
- (void)prewarmRunner;
- (void)retainSelf;
- (id)runWorkflowWithRequest:(id)a0 descriptor:(id)a1 completion:(id /* block */)a2;
- (void)stopObservingRunProgress;
- (void)updateRunViewSource:(id)a0;

@end
