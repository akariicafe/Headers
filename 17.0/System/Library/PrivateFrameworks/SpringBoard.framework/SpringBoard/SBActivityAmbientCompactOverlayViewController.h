@class PLPlatterView;
@protocol SBActivityAmbientCompactOverlayViewControllerDelegate;

@interface SBActivityAmbientCompactOverlayViewController : SBActivityViewController

@property (readonly, nonatomic) PLPlatterView *platterView;
@property (weak, nonatomic) id<SBActivityAmbientCompactOverlayViewControllerDelegate> compactOverlayDelegate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) double cornerRadius;

- (void)_layoutSubviews;
- (void)setBackgroundAlpha:(double)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)setContentAlpha:(double)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)activityHostViewController:(id)a0 requestsLaunchWithAction:(id)a1;
- (void)_configureTapGesture;
- (void)_handleTapGesture;

@end
