@class FBSDisplayLayoutMonitor, WFDialogRequest, WFUIPresenter, WFWorkflowRunningContext, NSString, WFScreenOnObserver;

@interface WFSuspendedDialogRestoration : NSObject <WFUIPresenterDelegate>

@property (retain, nonatomic) WFScreenOnObserver *screenOnObserver;
@property (retain, nonatomic) WFUIPresenter *presenter;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (retain, nonatomic) WFDialogRequest *suspendedRequest;
@property (retain, nonatomic) WFWorkflowRunningContext *suspendedRunningContext;
@property (copy, nonatomic) id /* block */ suspendedRequestCompletion;
@property (nonatomic) BOOL screenDidTurnOffDuringActiveRequest;
@property (nonatomic) BOOL shortcutsAppDidBackgroundDuringActiveRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)stopObservingApplicationState;
- (void).cxx_destruct;
- (void)presenterDidReceiveSuspendedResponseForRequest:(id)a0 runningContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)presenterShouldShowRequest:(id)a0 runningContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)presenterWillDismissPresentedContent;
- (id)initWithUserInterfacePresenter:(id)a0;
- (void)beginObservingApplicationState;
- (BOOL)shortcutsAppIsForegroundInLayout:(id)a0;

@end
