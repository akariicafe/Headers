@class _TtC10WorkflowUI35AddToSiriSwiftHostingViewController, WFWorkflow, WFDatabase;
@protocol WFAddToSiriViewControllerDelegate;

@interface WFAddToSiriViewController : UIViewController <WorkflowUI.AddToSiriSwiftHostingViewControllerDelegate>

@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) _TtC10WorkflowUI35AddToSiriSwiftHostingViewController *hostedAddToSiriController;
@property (weak, nonatomic) id<WFAddToSiriViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFWorkflow *workflow;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)addToSiriDidCancelWithViewController:(id)a0;
- (void)addToSiriWithViewController:(id)a0 createdShortcut:(id)a1;
- (void)addToSiriWithViewController:(id)a0 deletedShortcut:(id)a1;
- (void)addToSiriWithViewController:(id)a0 savedShortcut:(id)a1;
- (id)initWithWorkflow:(id)a0 database:(id)a1;

@end
