@class UITapGestureRecognizer, UIView, FCUIActivityPickerViewController, MTMaterialView;
@protocol SBFocusActivityPickerTransientOverlayViewControllerDelegate;

@interface SBFocusActivityPickerTransientOverlayViewController : SBTransientOverlayViewController {
    UIView *_contentView;
    FCUIActivityPickerViewController *_activityPickerViewController;
    MTMaterialView *_backgroundMaterialView;
    struct CGSize { double width; double height; } _preferredExpandedContentSize;
    UITapGestureRecognizer *_tapGesture;
}

@property (weak, nonatomic) id<SBFocusActivityPickerTransientOverlayViewControllerDelegate> delegate;

- (BOOL)shouldAutorotate;
- (void)_handleTap:(id)a0;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_dismiss:(BOOL)a0;
- (void)handleGestureDismissal;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;

@end
