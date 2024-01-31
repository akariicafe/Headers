@class NSString, NSDictionary, UILayoutGuide, UIView, NSLayoutConstraint, AMUIDateTimeViewController;
@protocol AMUIDateProviding;

@interface AMUIDateTimeDataLayerViewController : UIViewController <AMUIAmbientViewControlling, AMUIOpacityAdjusting> {
    AMUIDateTimeViewController *_dateTimeViewController;
    UILayoutGuide *_nominalSafeAreaLayoutGuide;
    NSLayoutConstraint *_nominalSafeAreaTopConstraint;
    NSLayoutConstraint *_nominalSafeAreaBottomConstraint;
    NSLayoutConstraint *_nominalSafeAreaLeftConstraint;
    NSLayoutConstraint *_nominalSafeAreaRightConstraint;
    NSLayoutConstraint *_dateTimeLeadingEdgeConstraint;
    NSLayoutConstraint *_dateTimeTrailingEdgeConstraint;
    NSLayoutConstraint *_dateTimeLeftEdgeConstraint;
    NSLayoutConstraint *_dateTimeRightEdgeConstraint;
}

@property (nonatomic) long long chromeOrientationPolicy;
@property (retain, nonatomic) id<AMUIDateProviding> dateProvider;
@property (readonly, nonatomic) NSDictionary *activeConfigurationMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *viewForOpacityAdjustment;

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)invalidate;
- (void)loadView;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)handleDismiss;
- (void)_noteWindowWillRotate:(id)a0;
- (void)_updateDateTimeConstraintsForChromeOrientation;
- (void)_updateDateTimeConstraintsForChromeOrientationWithInterfaceOrientation:(long long)a0;
- (void)_updateNominalSafeAreaGuide;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (BOOL)updatePosterConfiguration:(id)a0 withAnimationSettings:(id)a1;

@end
