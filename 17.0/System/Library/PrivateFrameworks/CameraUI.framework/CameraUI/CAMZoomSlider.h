@class NSTimer, UIView;
@protocol CAMZoomSliderDelegate;

@interface CAMZoomSlider : UISlider

@property (readonly, nonatomic) NSTimer *_visibilityTimer;
@property (nonatomic, getter=_isAutozooming, setter=_setAutozooming:) BOOL _autozooming;
@property (nonatomic, getter=isMinimumAutozooming, setter=_setMinimumAutozooming:) BOOL minimumAutozooming;
@property (nonatomic, getter=isMaximumAutozooming, setter=_setMaximumAutozooming:) BOOL maximumAutozooming;
@property (readonly, nonatomic) UIView *_minTrackMaskView;
@property (readonly, nonatomic) UIView *_maxTrackMaskView;
@property (nonatomic) long long layoutStyle;
@property (weak, nonatomic) id<CAMZoomSliderDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (readonly, nonatomic, getter=isAutozooming) BOOL autozooming;
@property (nonatomic, getter=isVisibilityTimerSuspended) BOOL visibilityTimerSuspended;
@property (nonatomic) long long orientation;

+ (BOOL)shouldFadeOutZoomSliderForLayoutStyle:(long long)a0;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)initWithLayoutStyle:(long long)a0;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_updateForLayoutStyle;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_handleTouchUpInside:(id)a0;
- (void)_endAutozooming;
- (void)_beginAutozooming;
- (void)_commonCAMZoomSliderInitializationWithLayoutStyle:(long long)a0;
- (void)_hideZoomSlider:(id)a0;
- (void)_makeInvisibleAnimationDuration:(double)a0;
- (void)_startVisibilityTimer;
- (void)_stopVisibilityTimer;
- (double)_thumbCenterMaximumXForTrackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_thumbCenterMinimumXForTrackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_thumbCenterXForValue:(float)a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateAutozooming;
- (float)_valueForThumbCenterX:(double)a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)locationOfTouch:(id)a0;
- (void)makeInvisibleAnimated:(BOOL)a0;
- (void)makeVisibleAnimated:(BOOL)a0;
- (BOOL)shouldHideForExpiredVisibilityTimer;

@end
