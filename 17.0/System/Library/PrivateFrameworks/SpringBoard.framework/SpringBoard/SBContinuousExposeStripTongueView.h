@class _UIBackdropView, UIImageView, UIView, UITapGestureRecognizer;
@protocol SBContinuousExposeStripTongueViewDelegate;

@interface SBContinuousExposeStripTongueView : UIView {
    UIView *_tongueContainerView;
    UIImageView *_chevronImageView;
    UIView *_tongueMaskView;
    _UIBackdropView *_backdropView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct CGSize { double width; double height; } _bitmapMaskSize;
}

@property (weak, nonatomic) id<SBContinuousExposeStripTongueViewDelegate> delegate;
@property (readonly, nonatomic) struct SBSwitcherContinuousExposeStripTongueAttributes { unsigned long long state; unsigned long long direction; } attributes;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_handleTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateContainerPosition;
- (void)_updateContainerTransform;
- (void)_updateSubviewLayoutForCollapsedOrExpandedState;
- (void)_updateSubviewOpacityForCollapsedOrExpandedState;
- (void)setAttributes:(struct SBSwitcherContinuousExposeStripTongueAttributes { unsigned long long x0; unsigned long long x1; })a0 animated:(BOOL)a1;

@end
