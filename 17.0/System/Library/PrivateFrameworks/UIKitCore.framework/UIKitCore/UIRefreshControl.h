@class UIColor, NSAttributedString, _UIRefreshControlContentView;
@protocol _UIRefreshControlHosting;

@interface UIRefreshControl : UIControl {
    long long _style;
    _UIRefreshControlContentView *_contentView;
    double _refreshControlHeight;
    double _visibleHeight;
    double _snappingHeight;
    double _additionalTopInset;
    BOOL _insetsApplied;
    BOOL _adjustingInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _appliedInsets;
    id<_UIRefreshControlHosting> _host;
}

@property (readonly, nonatomic) long long refreshControlState;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) double _refreshControlHeight;
@property (readonly, nonatomic) double _snappingHeight;
@property (readonly, nonatomic) double _visibleHeight;
@property (readonly, nonatomic) BOOL _hostAdjustsContentOffset;
@property (readonly, nonatomic) BOOL _areInsetsBeingApplied;
@property (readonly, nonatomic, getter=_appliedInsets) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } appliedInsets;
@property (weak, nonatomic, getter=_host, setter=_setHost:) id<_UIRefreshControlHosting> _host;
@property (readonly, nonatomic, getter=isRefreshing) BOOL refreshing;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSAttributedString *attributedTitle;

+ (Class)_contentViewClassForStyle:(long long)a0;
+ (BOOL)_allowsUnsupportedMacIdiomBehavior;
+ (id)_defaultColor;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)a0;

- (void)_addInsetHeight:(double)a0;
- (void)_update;
- (void)setBackgroundColor:(id)a0;
- (id)_tintColor;
- (id)init;
- (void)_removeInsets;
- (long long)_recomputeNewState;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_updateConcealingMask;
- (void)_setVisibleHeight:(double)a0;
- (id)initWithStyle:(long long)a0;
- (id)_scrollView;
- (void)_endRefreshingAnimated:(BOOL)a0;
- (void)endRefreshing;
- (struct CGPoint { double x0; double x1; })_originForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)sizeToFit;
- (void)_updateHiddenStateIfNeeded;
- (void)_setAttributedTitle:(id)a0;
- (double)_impactIntensityForVelocity:(double)a0;
- (BOOL)_canTransitionFromState:(long long)a0 toState:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (id)_attributedTitle;
- (void)_updateSnappingHeight;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addInsets;
- (double)_stiffnessForVelocity:(double)a0;
- (void)_setRefreshControlState:(long long)a0 notify:(BOOL)a1;
- (void)_removeInsetHeight:(double)a0;
- (void)_setTintColor:(id)a0;
- (double)_visibleHeightForContentOffset:(struct CGPoint { double x0; double x1; })a0 origin:(struct CGPoint { double x0; double x1; })a1;
- (double)revealedFraction;
- (void)setRefreshControlState:(long long)a0;
- (double)_scrollViewHeight;
- (id)_contentView;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resizeToFitContents;
- (id)description;
- (void)_didScroll;
- (void)beginRefreshing;
- (BOOL)_isApplyingInsets;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
