@class OKRoundProgressView, CMMotionManager, CMAttitude, OKUILabelHUDView, NSOperationQueue;

@interface OKPresentationViewController : OKPresentationViewControllerProxy {
    CMMotionManager *_motionManager;
    long long _motionOrientationReference;
    NSOperationQueue *_motionQueue;
    BOOL _shouldForwardMotion;
    double _motionLastRotationX;
    double _motionLastRotationY;
    double _motionLastRotationZ;
    OKRoundProgressView *_roundProgressView;
}

@property (retain, nonatomic) OKUILabelHUDView *couchLabelHUDView;
@property (retain) CMAttitude *motionAttitudeReference;

- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)commonInit;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)colorSpace;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)orientationChanged:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)isActivityIndicatorVisible;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void)motionCancelled:(long long)a0 withEvent:(id)a1;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (void)_startPresentation;
- (void)setActivityIndicatorVisible:(BOOL)a0;
- (void)_startMotion;
- (void)_updateMotion:(long long)a0;
- (void)updateActivityIndicatorWithProgress:(double)a0;
- (void)updateMotion;

@end
