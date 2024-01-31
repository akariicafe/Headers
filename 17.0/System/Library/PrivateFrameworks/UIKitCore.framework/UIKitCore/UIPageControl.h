@class UIVisualEffect, UIPageControlProgress, UIColor, UIImage, UIView, _UIPageControlVisualProvider;

@interface UIPageControl : UIControl {
    _UIPageControlVisualProvider *_visualProvider;
    struct { unsigned char hideForSinglePage : 1; unsigned char defersCurrentPageDisplay : 1; unsigned char allowScrubbing : 1; unsigned char allowTapping : 1; unsigned char flickToEndGestureEnabled : 1; } _pageControlFlags;
    struct { unsigned char verticalPadding : 1; unsigned char horizontalPadding : 1; unsigned char indicatorSpacing : 1; unsigned char backgroundView : 1; } _custom;
    double _horizontalPadding;
    double _verticalPadding;
    double _indicatorSpacing;
    unsigned long long _preferredNumberOfVisibleIndicators;
}

@property (nonatomic, setter=_setCustomHorizontalPadding:) double _customHorizontalPadding;
@property (nonatomic, setter=_setCustomVerticalPadding:) double _customVerticalPadding;
@property (nonatomic, setter=_setCustomIndicatorSpacing:) double _customIndicatorSpacing;
@property (nonatomic, getter=_preferredNumberOfVisibleIndicators, setter=_setPreferredNumberOfVisibleIndicators:) unsigned long long preferredNumberOfVisibleIndicators;
@property (nonatomic, setter=_setAllowsDiscreteInteraction:) BOOL _allowsDiscreteInteraction;
@property (nonatomic, setter=_setIndicatorOpacity:) double _indicatorOpacity;
@property (retain, nonatomic, setter=_setPlatterBackgroundView:) UIView *_platterBackgroundView;
@property (nonatomic) long long previousPage;
@property (nonatomic, setter=_setFlickToEndGestureEnabled:) BOOL _flickToEndGestureEnabled;
@property (retain, nonatomic, setter=_setPlatterEffect:) UIVisualEffect *_platterEffect;
@property (retain, nonatomic, setter=_setPageProgress:) UIPageControlProgress *_pageProgress;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (retain, nonatomic) UIPageControlProgress *progress;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long direction;
@property (readonly, nonatomic) long long interactionState;
@property (nonatomic) BOOL allowsContinuousInteraction;
@property (retain, nonatomic) UIImage *preferredIndicatorImage;
@property (retain, nonatomic) UIImage *preferredCurrentPageIndicatorImage;
@property (nonatomic) BOOL defersCurrentPageDisplay;

+ (BOOL)doesOverrideMethod:(SEL)a0 inBaseClass:(Class)a1;
+ (id)_visualProviderForPageControl:(id)a0;

- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeFocused;
- (id)indicatorImageForPage:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)_displayedPage;
- (void)_emitValueChanged;
- (BOOL)_implementsCustomCurrentPageImagesOverride;
- (BOOL)_implementsCustomPageImagesOverride;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_indicatorFrameForPage:(long long)a0;
- (void)_invalidateIndicators;
- (BOOL)_isVertical;
- (void)_setCurrentPage:(long long)a0;
- (void)_setPage:(long long)a0 interactionState:(long long)a1;
- (void)_setVertical:(BOOL)a0;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; id x2; BOOL x3; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; } x4; } *)a0;
- (void)_updateCurrentPage:(long long)a0 updateDisplayImmediately:(BOOL)a1;
- (void)_updateCurrentPageDisplayWithForceUpdate:(BOOL)a0;
- (void)_updateCurrentPageProgress;
- (id)currentPageIndicatorImageForPage:(long long)a0;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)setCurrentPageIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)setIndicatorImage:(id)a0 forPage:(long long)a1;
- (BOOL)shouldTrack;
- (void)updateCurrentPageDisplay;

@end
