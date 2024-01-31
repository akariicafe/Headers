@class PXUpdater, UIViewController;
@protocol PUBarsControllerDelegate;

@interface PUBarsController : NSObject {
    struct { BOOL respondsToViewController; BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToContentGuideInsetsDidChange; } _delegateFlags;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (nonatomic) BOOL updateScheduled;
@property (nonatomic) long long updateBarsDisabledCount;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentGuideInsets;
@property (weak, nonatomic) id<PUBarsControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (readonly, nonatomic) BOOL wantsNavigationBarVisible;
@property (readonly, nonatomic) BOOL wantsToolbarVisible;
@property (readonly, nonatomic) long long preferredBarStyle;

- (id)init;
- (void)updateIfNeeded;
- (void)invalidateViewHostingGestureRecognizers;
- (void)_invalidateGestureRecognizers;
- (void)updateGestureRecognizersWithHostingView:(id)a0;
- (void)updateContentGuideInsets;
- (void)_setNeedsUpdate;
- (void)_updateBars;
- (void)_updateGestureRecognizers;
- (void).cxx_destruct;
- (void)updateBars;
- (void)_updateNowIfNeeded;
- (void)invalidateViewControllerView;
- (void)invalidateBars;
- (BOOL)_isUpdateBarsDisabled;
- (void)_reenableUpdateBars;
- (void)disableUpdateBarsForDuration:(double)a0;
- (void)invalidateContentGuideInsets;
- (BOOL)isLocationFromProviderInBarsArea:(id)a0;

@end
