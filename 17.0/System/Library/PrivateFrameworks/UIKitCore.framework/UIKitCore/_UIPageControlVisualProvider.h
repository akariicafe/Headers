@class UIImage, UIPageControl, UIView;

@interface _UIPageControlVisualProvider : NSObject {
    UIPageControl *_pageControl;
    long long _displayedPage;
}

@property (readonly, nonatomic) long long displayedPage;
@property (nonatomic) long long interactionState;
@property (nonatomic) BOOL supportsContinuousInteraction;
@property (retain, nonatomic) UIImage *preferredIndicatorImage;
@property (retain, nonatomic) UIImage *preferredActiveIndicatorImage;
@property (nonatomic) double indicatorOpacity;
@property (retain, nonatomic) UIView *backgroundView;

- (void)didUpdatePageProgress;
- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (void)setCustomIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)didUpdateLayoutDirection;
- (id)initWithPageControl:(id)a0;
- (void)didUpdateCurrentPageProgress;
- (void)setPage:(long long)a0 interactionState:(long long)a1;
- (void)didUpdateCustomLayoutValues;
- (void)invalidateIndicators;
- (void)didUpdateBackgroundEffect;
- (id)customActiveIndicatorImageForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)didUpdateInteractionTypeAvailability;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })indicatorFrameForPage:(long long)a0;
- (id)customIndicatorImageForPage:(long long)a0;
- (void)pruneArchivedSubviews:(id)a0;
- (void)didUpdateBackgroundStyle;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (BOOL)shouldDisableTouchTracking;
- (void)setCustomActiveIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)didUpdateNumberOfPages;
- (void)didEndTrackingWithTouch:(id)a0;
- (void)teardownPageControl;
- (void)updateDisplayedPageToCurrentPage;
- (void)didUpdatePageIndicatorTintColor;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)prepare;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
