@class NSNumber, NSArray, NSIndexSet, UISelectionFeedbackGenerator, UIGestureRecognizer, NSMutableArray, ABFloatSpringProperty;
@protocol ABCarouselViewDelegate;

@interface ABCarouselView : ABTransformView {
    NSArray *_items;
    NSMutableArray *_itemViews;
    ABFloatSpringProperty *_offsetSpring;
    long long _selectedIndex;
    NSNumber *_dragInitialOffset;
    NSNumber *_decelerationOffset;
    NSNumber *_alphaBlend;
    NSIndexSet *_indexesToApplyAlphaBlend;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    id<ABCarouselViewDelegate> _delegate;
    UIGestureRecognizer *_scrollGestureRecognizer;
    double _buttonPressProgress;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_contentWidth;
- (void)_handleTapGesture:(id)a0;
- (void)_setupSubviews;
- (void)_endTracking;
- (double)_minOffset;
- (void)_beginTracking;
- (id)_carouselItemViewForItem:(id)a0 index:(long long)a1;
- (void)_handleScrollGesture:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_itemImageViewFrameForIndex:(long long)a0;
- (double)_itemPageWidth;
- (void)_trackDelta:(double)a0;

@end
