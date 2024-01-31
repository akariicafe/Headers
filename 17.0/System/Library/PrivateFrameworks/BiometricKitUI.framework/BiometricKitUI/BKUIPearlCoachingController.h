@class BKUIPearlInstructionView, UIView, BKUIPearlCoachingDeviceView, BKUIButtonTray, UIScrollView, UIButton;
@protocol BKUIPearlCoachingControllerDelegate;

@interface BKUIPearlCoachingController : UIViewController

@property (retain, nonatomic) BKUIPearlCoachingDeviceView *deviceView;
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView;
@property (retain, nonatomic) UIButton *escapeHatchButton;
@property (readonly, nonatomic, getter=isDeviceFlat) BOOL deviceFlat;
@property (retain, nonatomic) BKUIButtonTray *buttonTray;
@property (retain, nonatomic) UIScrollView *scrollview;
@property (retain, nonatomic) UIView *scrollContentView;
@property long long orientation;
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL inSheet;
@property (nonatomic) BOOL isDisplayZoomEnabled;
@property (weak, nonatomic) id<BKUIPearlCoachingControllerDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)deviceOrientationChanged;
- (BOOL)resetDeviceView;
- (BOOL)didOrientationChange;
- (void)escapeHatchButtonPressed:(id)a0;
- (void)handleRotation;
- (BOOL)needsToShow;
- (void)stopCoachingAnimation;
- (void)updateInstructionText;

@end
