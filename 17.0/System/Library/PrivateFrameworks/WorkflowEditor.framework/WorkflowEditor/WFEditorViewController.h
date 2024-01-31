@class WFEditorHostingViewController, WFContextualActionSuggester, WFWorkflow, HMHome;
@protocol WFEditorAuxiliaryViewPresenter, WFEditorViewControllerDelegate;

@interface WFEditorViewController : UIViewController <WFEditorHostingViewControllerDelegate>

@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFEditorHostingViewController *hostingViewController;
@property (weak, nonatomic) id<WFEditorViewControllerDelegate> delegate;
@property (weak, nonatomic) id<WFEditorAuxiliaryViewPresenter> auxiliaryViewPresenter;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) BOOL canShowEmptyState;
@property (nonatomic) BOOL canShowInputAction;
@property (nonatomic) Class triggerInputType;
@property (nonatomic) HMHome *home;
@property (readonly, nonatomic) double actionCanvasWidth;
@property (retain, nonatomic) WFContextualActionSuggester *actionSuggester;

- (void)loadView;
- (void)stop;
- (void).cxx_destruct;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (id)initWithWorkflow:(id)a0;
- (void)appendAction:(id)a0;
- (void)performScrollingTest:(id)a0;
- (void)reportSuggestionSessionEnded;
- (void)runWithSource:(id)a0;
- (void)scrollToAction:(id)a0;
- (void)actionsDidChangeInEditorHostingViewController:(id)a0;
- (void)editorHostingViewController:(id)a0 didChangeRunningState:(BOOL)a1 fractionCompleted:(double)a2 isWaiting:(BOOL)a3;
- (void)editorHostingViewController:(id)a0 didChangeVariablePickingState:(BOOL)a1;
- (void)editorHostingViewControllerDidFinishRunning:(id)a0 cancelled:(BOOL)a1;
- (void)showActionError:(id)a0 for:(id)a1;
- (void)stopPickingVariables;

@end
