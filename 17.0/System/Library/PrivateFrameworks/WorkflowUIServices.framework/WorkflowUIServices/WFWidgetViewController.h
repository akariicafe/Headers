@class WFWidgetGridView, NSObject, NSString, WFWidgetOptions, WFWidgetWorkflowRunnerClient, WFWidgetCache;
@protocol OS_os_log;

@interface WFWidgetViewController : UIViewController <WFWidgetGridViewDelegate, WFWorkflowRunnerClientDelegate>

@property (readonly, nonatomic) WFWidgetCache *cache;
@property (readonly, nonatomic) WFWidgetGridView *gridView;
@property (readonly, nonatomic) long long widgetType;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) WFWidgetOptions *options;
@property (retain, nonatomic) WFWidgetWorkflowRunnerClient *client;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL needsLayout;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)progressSubscribers;
+ (id)runningStates;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)gridView:(id)a0 cellDidTransitionToRunningState:(long long)a1;
- (void)gridView:(id)a0 didTapCell:(id)a1;
- (void)gridViewDidFinishLayout:(id)a0;
- (void)handleUpdateFromCache:(id)a0;
- (void)layoutWithWorkflows:(id)a0;
- (unsigned long long)limitFromOptions:(id)a0;
- (id /* block */)publishingHandlerForCell:(id)a0;
- (void)refreshWorkflows;
- (void)removeStaleRunningContexts;
- (void)restoreRunningStateIfNecessary;
- (void)resumeRunningWithCell:(id)a0;
- (id)runningContextForWorkflowIdentifier:(id)a0;
- (void)showRunningUIForCell:(id)a0;
- (void)startObservingContentSizeCategoryNotifications;
- (void)stopObservingContentSizeCategoryNotifications;
- (void)stopRunningWithCell:(id)a0;
- (long long)widgetTypeFromOptions:(id)a0;
- (id)workflowOrFolderIdentifierFromOptions:(id)a0;

@end
