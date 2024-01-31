@class NSTimer, UILongPressGestureRecognizer, CEKAdditiveAnimator, UIView, NSString, CEKSlider, CEKExpandingTickMarksView, UILabel;
@protocol CEKExpandingSliderDelegate;

@interface CEKExpandingSlider : UIControl <CEKAdditiveAnimatorDelegate, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UILabel *_titleLabel;
@property (readonly, nonatomic) UILabel *_valueLabel;
@property (readonly, nonatomic) UIView *_levelIndicatorView;
@property (readonly, nonatomic) CEKExpandingTickMarksView *_ticksView;
@property (readonly, nonatomic) CEKSlider *_slider;
@property (readonly, nonatomic) UILongPressGestureRecognizer *_gestureRecognizer;
@property (readonly, nonatomic) CEKAdditiveAnimator *_animator;
@property (nonatomic, setter=_setExpansionAnimationCounter:) unsigned long long _expansionAnimationCounter;
@property (retain, nonatomic, setter=_setExpansionAnimationTimer:) NSTimer *_expansionAnimationTimer;
@property (retain, nonatomic, setter=_setMarkedValueAnimationTimer:) NSTimer *_markedValueAnimationTimer;
@property (weak, nonatomic) id<CEKExpandingSliderDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double markedValue;
@property (nonatomic) double value;
@property (nonatomic) BOOL expanded;
@property (nonatomic) double collapsedCenterX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateColors;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithTitle:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)setValue:(double)a0 animated:(BOOL)a1;
- (void)_handlePress:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateSubviewVisibility;
- (void)_handleExpansionAnimationTimerFired:(id)a0;
- (void)_handleMarkedValueAnimationTimerFired:(id)a0;
- (void)_handleSliderDidChangeValue:(id)a0;
- (void)_setExpanded:(BOOL)a0 animated:(BOOL)a1 shouldNotify:(BOOL)a2;
- (void)_updateLabelColorsForProgress:(double)a0;
- (void)_updateMarkedValueAnimated:(BOOL)a0;
- (void)_updateTickViewFrameForProgress:(double)a0;
- (void)_updateUIForValue:(double)a0 animated:(BOOL)a1;
- (void)animator:(id)a0 didUpdateValuesForKeys:(id)a1;

@end
