@class PUTileController, PUTilingView, UIView, UIViewController;
@protocol PUTilingViewControllerTransition, PUInteractiveDismissalControllerDelegate, PUInterruptibleViewControllerTransition;

@interface PUInteractiveDismissalController : NSObject {
    struct { BOOL respondsToCanBeginDismissalAtLocationFromProvider; BOOL respondsToTilingView; BOOL respondsToDesignatedTileController; BOOL respondsToIsDismissing; } _delegateFlags;
}

@property (weak, nonatomic, setter=_setViewController:) UIViewController *_viewController;
@property (retain, nonatomic, setter=_setViewHostingGestureRecognizers:) UIView *_viewHostingGestureRecognizers;
@property (retain, nonatomic, setter=_setInterruptibleViewControllerTransition:) id<PUInterruptibleViewControllerTransition> _interruptibleViewControllerTransition;
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers;
@property (readonly, nonatomic) PUTilingView *tilingView;
@property (readonly, nonatomic) PUTileController *designatedTileController;
@property (readonly, nonatomic) id<PUTilingViewControllerTransition> tilingViewControllerTransition;
@property (weak, nonatomic) id<PUInteractiveDismissalControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isHandlingDismissalInteraction;

- (void)_invalidateGestureRecognizers;
- (void)updateGestureRecognizersWithHostingView:(id)a0;
- (void)_updateIfNeeded;
- (void)_updateGestureRecognizersIfNeeded;
- (void).cxx_destruct;
- (void)_invalidateInterruptibleViewControllerTransition;
- (void)_invalidateViewController;
- (void)_invalidateViewHostingGestureRecognizers;
- (long long)_preferredDismissalTransitionType;
- (void)_updateInterruptibleViewControllerTransitionIfNeeded;
- (void)_updateViewControllerIfNeeded;
- (void)_updateViewHostingGestureRecognizersIfNeeded;
- (void)beginDismissal;
- (BOOL)canBeginDismissalAtLocationFromProvider:(id)a0;
- (void)endDismissal:(BOOL)a0;
- (void)invalidateDelegateData;
- (void)setIsHandlingDismissalInteraction:(BOOL)a0;
- (void)updateDismissalWithInteractionProgress:(double)a0 interactionWillFinish:(BOOL)a1;

@end
