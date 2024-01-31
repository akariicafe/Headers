@class PXUpdater, NSString, UIView, PXScrollViewController;
@protocol PXSecondaryToolbarActionHandler, PXSecondaryToolbarStyleGuideProvider;

@interface PXSecondaryToolbarController : NSObject <PXScrollViewControllerObserver> {
    BOOL _willUpdate;
    id<PXSecondaryToolbarStyleGuideProvider> _styleGuideProvider;
    BOOL _isShowingGradient;
    UIView *_gradientView;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) UIView *secondaryToolbar;
@property (nonatomic) BOOL isAtTop;
@property (nonatomic) BOOL stretched;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *leadingAccessoryView;
@property (retain, nonatomic) UIView *trailingAccessoryView;
@property (nonatomic) double alpha;
@property (weak, nonatomic) id<PXSecondaryToolbarActionHandler> actionHandler;
@property (nonatomic) BOOL legibilityGradientEnabled;
@property (retain, nonatomic) PXScrollViewController *contentScrollViewController;
@property (readonly, nonatomic) BOOL isSecondaryToolbarVisible;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } containerViewAdditionalEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsUpdate;
- (id)init;
- (void)updateIfNeeded;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewControllerDidLayoutSubviews:(id)a0;
- (void)_invalidateContentLayout;
- (void)_replaceAccessoryView:(id)a0 with:(id)a1;
- (void)_updateContentLayout;
- (void)_updateLegibilityGradient;
- (void)_updatePositioning;
- (void)_updateSecondaryToolbarLayout;
- (void)_updateViewOpacity;
- (id)initWithContainerView:(id)a0 styleGuideProvider:(id)a1;
- (void)invalidatePositioning;
- (void)invalidateSecondaryToolbarLayout;
- (void)invalidateViewOpacity;
- (void)removeFromContainerView;

@end
