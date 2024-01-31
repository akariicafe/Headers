@class PLGrabberView, PLPlatterView, UIView;

@interface SBActivityAmbientFullOverlayViewController : SBActivityViewController {
    PLGrabberView *_grabberView;
}

@property (readonly, nonatomic) PLPlatterView *platterView;
@property (readonly, nonatomic) UIView *backgroundTintView;

- (void)_layoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_grabberViewFrame;
- (BOOL)_hasBackgroundTintColor;
- (BOOL)_isWidgetBasedActivity;
- (BOOL)_itemIsFirstPartyActivity:(id)a0;
- (void)_updateBackgroundTintViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;

@end
