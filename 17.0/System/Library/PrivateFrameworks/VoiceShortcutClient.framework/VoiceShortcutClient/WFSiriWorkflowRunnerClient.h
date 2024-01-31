@class NSXPCListener, WFPausedShortcutData, NSString, WFSiriExecutionMetrics;
@protocol WFSiriWorkflowRunnerClientDelegate;

@interface WFSiriWorkflowRunnerClient : WFWorkflowRunnerClient <NSXPCListenerDelegate, WFSiriUIPresenterInterface>

@property (readonly, nonatomic) NSXPCListener *dialogRequestListener;
@property (retain, nonatomic) WFPausedShortcutData *pausedData;
@property (weak, nonatomic) id<WFSiriWorkflowRunnerClientDelegate> delegate;
@property (retain, nonatomic) WFSiriExecutionMetrics *siriExecutionMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stop;
- (void).cxx_destruct;
- (void)willBeginExecutingShortcutStep:(id)a0;
- (long long)deviceIdiomForCurrentDevice;
- (long long)deviceIdiomFromRunSource:(long long)a0;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithAutoShortcutIdentifier:(id)a0 phrase:(id)a1 runSource:(long long)a2 action:(id)a3 metadata:(id)a4;
- (id)initWithPausedShortcutData:(id)a0 runSource:(long long)a1 options:(id)a2;
- (id)initWithRunDescriptor:(id)a0 runSource:(long long)a1 options:(id)a2;
- (id)initWithWorkflowIdentifier:(id)a0 runSource:(long long)a1 options:(id)a2;
- (id)initWithWorkflowName:(id)a0 runSource:(long long)a1 options:(id)a2;
- (id)pauseRunningShortcut;
- (void)performSiriRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)willBeginExecutingShortcutWithActionCount:(id)a0;
- (id)workflowRunSourceForSiriRunSource:(long long)a0;

@end
