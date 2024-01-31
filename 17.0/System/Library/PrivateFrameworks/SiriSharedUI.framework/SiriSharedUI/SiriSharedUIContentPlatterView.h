@class SiriSharedUIContentPlatterScrollView, SiriSharedUIContentPlatterDarkenMaskView, NSArray, PLPlatterView, NSString, SiriSharedUIPanDismissalGestureRecognizer, SiriSharedUIStandardView;
@protocol SiriSharedUIContentPlatterViewDelegate;

@interface SiriSharedUIContentPlatterView : SiriSharedUIStandardView <UIScrollViewDelegate, SiriSharedUIContentPlatterScrollViewDelegate, SiriSharedUIDarkening, SiriSharedUIAccessibilityFocusing> {
    BOOL _reducedOrbOpacity;
}

@property (retain, nonatomic, getter=_contentHostingView) SiriSharedUIStandardView *contentHostingView;
@property (retain, nonatomic, getter=_scrollView) SiriSharedUIContentPlatterScrollView *scrollView;
@property (retain, nonatomic, getter=_darkenMaskView) SiriSharedUIContentPlatterDarkenMaskView *darkenMaskView;
@property (nonatomic, getter=_platterNeedsLayout, setter=_setPlatterNeedsLayout:) BOOL platterNeedsLayout;
@property (nonatomic, getter=_shouldAllowDismissalWhenScrollable, setter=_setShouldAllowDismissalWhileScrollable:) BOOL shouldAllowDismissalWhileScrollable;
@property (nonatomic, getter=_currentContentOffset, setter=_setCurrentContentOffset:) double currentContentOffset;
@property (retain, nonatomic) PLPlatterView *platterView;
@property (weak, nonatomic) id<SiriSharedUIContentPlatterViewDelegate> delegate;
@property (retain, nonatomic) NSArray *contentViews;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) double heightForContentSeparators;
@property (retain, nonatomic) SiriSharedUIPanDismissalGestureRecognizer *dismissalGestureRecognizer;
@property (nonatomic) BOOL isInAmbient;
@property (nonatomic) BOOL isInAmbientInteractivity;
@property (nonatomic) BOOL allowAutomaticContentViewsScaling;
@property (nonatomic) BOOL isNextLevelCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double darkenIntensity;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetForScrollView:(id)a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollView:(id)a0;
- (struct CGSize { double x0; double x1; })_contentSizeForScrollView:(id)a0;
- (void)_updateContentFullyScrolled;
- (void)_updateContentScale;
- (void)_updateContentViewTransformationForAmbientUpdate;
- (id)contentPlatterScrollView;
- (BOOL)shouldAllowSimultaneousGestureRecognizersForScrollView:(id)a0;

@end
