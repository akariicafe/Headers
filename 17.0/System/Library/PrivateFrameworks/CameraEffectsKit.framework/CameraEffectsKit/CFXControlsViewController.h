@class NSLayoutConstraint, CFXEffectBrowserContentPresenterViewController, UIView;

@interface CFXControlsViewController : UIViewController

@property (weak, nonatomic) UIView *controlsContainerView;
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (retain, nonatomic) UIView *effectsBrowser;
@property (nonatomic) BOOL usesInternalCaptureSession;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlsContainerViewTopConstraint;
@property (retain, nonatomic) CFXEffectBrowserContentPresenterViewController *effectBrowserContentPresenterViewController;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })effectsPickerCenter;
- (id)effectsPickerSnapshot;

@end
