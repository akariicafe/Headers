@class UIView, CAMCreativeCameraButton, CAMBottomBar, CAMFlipButton, CFXFeedbackController, NSLayoutConstraint, CUShutterButton, UIColor;
@protocol CFXCameraControlsViewControllerDelegate;

@interface CFXCameraControlsViewController : UIViewController

@property (weak, nonatomic) UIView *effectButtonContainerPad;
@property (weak, nonatomic) UIView *shutterButtonContainerPad;
@property (weak, nonatomic) UIView *flipButtonContainerPad;
@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) UIView *bottomBlackView;
@property (retain, nonatomic) UIView *appStripBackgroundView;
@property (weak, nonatomic) UIView *appStripBackgroundContainerView;
@property (weak, nonatomic) NSLayoutConstraint *backgroundViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewWidthConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewTrailingConstraint;
@property (retain, nonatomic) CFXFeedbackController *feedbackController;
@property (nonatomic) long long captureMode;
@property (retain, nonatomic) CAMBottomBar *bottomBar;
@property (retain, nonatomic) CUShutterButton *shutterButton;
@property (nonatomic) BOOL dockIsMagnified;
@property (nonatomic) double dockMagnifiedHeightDelta;
@property (retain, nonatomic) CAMCreativeCameraButton *effectButton;
@property (retain, nonatomic) CAMFlipButton *flipButton;
@property (weak, nonatomic) id<CFXCameraControlsViewControllerDelegate> delegate;
@property (nonatomic) UIColor *backgroundColor;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)JFX_orientationMonitorInterfaceOrientationNotification:(id)a0;
- (double)CFX_smallPhoneDockHeightAdjustment;
- (void)configureUIForOrientation;
- (void)effectsButtonTapped:(id)a0;
- (id)initWithDelegate:(id)a0 captureMode:(long long)a1;
- (void)setShutterButtonAlpha:(double)a0;
- (void)setShutterButtonEnabled:(BOOL)a0;
- (void)shutterButtonTapped:(id)a0;
- (void)switchCameraButtonTapped:(id)a0;
- (void)updateUIForDockMagnify:(BOOL)a0 dockHeightDelta:(double)a1;
- (void)updateUIForVideoRecording:(BOOL)a0;

@end
