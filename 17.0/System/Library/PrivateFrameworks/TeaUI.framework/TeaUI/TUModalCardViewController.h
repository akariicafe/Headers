@class UIViewController, NSString, UIVisualEffectView, UIButton;

@interface TUModalCardViewController : UIViewController <UIPopoverPresentationControllerDelegate>

@property (readonly, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL usesMaterialBackground;
@property (readonly, nonatomic) UIVisualEffectView *backgroundView;
@property (copy, nonatomic) id /* block */ onDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (void)handleClose;
- (id)initWithRootViewController:(id)a0 useMaterialBackground:(BOOL)a1;

@end
