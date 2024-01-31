@class NSString, UINavigationController, WFWorkflow;
@protocol WFAddToHomeScreenActivityDelegate;

@interface WFAddToHomeScreenActivity : UIActivity <WFAddToHomeScreenViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) id<WFAddToHomeScreenActivityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (id)initWithSource:(id)a0;
- (id)activityTitle;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)activityViewController;
- (id)_systemImageName;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (void)activityDidFinish:(BOOL)a0 shouldDismiss:(BOOL)a1;
- (void)addToHomeScreenViewController:(id)a0 didFinishWithName:(id)a1 icon:(id)a2;
- (void)addToHomeScreenWithName:(id)a0 icon:(id)a1;

@end
