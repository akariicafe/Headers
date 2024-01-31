@class LAUIPhysicalButtonView, LAUIHorizontalArrowView;

@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController {
    unsigned char _rotationCount;
    BOOL _attemptedSecondaryViewCreation;
    BOOL _cameraOrientationSupported;
    LAUIHorizontalArrowView *_cameraArrowView;
    LAUIPhysicalButtonView *_physicalButtonView;
}

@property (readonly, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic) BOOL showPhysicalButtonIndicator;
@property (nonatomic) BOOL showCameraIndicator;

- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (int)_preferredStatusBarVisibility;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_createSecondaryViewsIfNecessary;
- (BOOL)_effectiveShowCameraIndicator;
- (BOOL)_effectiveShowPhysicalButtonIndicator;

@end
