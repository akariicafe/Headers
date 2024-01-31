@class NSString, PUTileLayoutInfo, NSMutableArray, PUTilingView;

@interface PUTileController : NSObject

@property (retain, nonatomic) NSMutableArray *reasonsToSuppressAnimatedUpdates;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isDetached) BOOL detached;
@property (nonatomic, getter=isReusable) BOOL reusable;
@property (nonatomic) long long animationCount;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, weak, nonatomic) PUTilingView *tilingView;
@property (readonly, nonatomic) PUTileLayoutInfo *layoutInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly, nonatomic) BOOL wantsVisibleRectChanges;
@property (readonly, nonatomic) BOOL isPresentationActive;
@property (readonly, nonatomic) BOOL isViewControllerTransitioning;
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) PUTileLayoutInfo *presentationLayoutInfo;
@property (nonatomic) BOOL shouldPreserveCurrentContent;
@property (readonly, nonatomic) BOOL shouldAvoidInPlaceSnapshottedFadeOut;
@property (readonly, nonatomic) BOOL shouldSuppressAnimatedUpdates;
@property (nonatomic) struct CGSize { double width; double height; } expectedPresentationSize;

- (id)generateAssetTransitionInfo;
- (void)setPreloadedImage:(id)a0;
- (void)isViewControllerTransitioningDidChange;
- (void)didChangeVisibleRect;
- (void)setLayoutInfo:(id)a0;
- (void)applyLayoutInfo:(id)a0;
- (id)init;
- (void)didChangeAnimating;
- (void)expectedPresentationSizeDidChange;
- (id)freeze;
- (void)reuseIfApplicable;
- (void)prepareForReuse;
- (void)becomeReusable;
- (id)description;
- (void)removeAllAnimations;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)addToTilingView:(id)a0;
- (void)didChangeActive;
- (BOOL)adoptAssetTransitionInfo:(id)a0;
- (void)didEndAnimation:(long long)a0;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)a0 completionHandler:(id /* block */)a1;
- (void)setIsViewControllerTransitioning:(BOOL)a0;
- (void)setTilingView:(id)a0;
- (void)startSuppressingAnimatedUpdatesWithReason:(id)a0;
- (void)stopSuppressingAnimatedUpdatesWithReason:(id)a0;
- (void)viewControllerTransitionDidEnd;
- (void)viewControllerTransitionWillBegin;
- (long long)willBeginAnimation;

@end
