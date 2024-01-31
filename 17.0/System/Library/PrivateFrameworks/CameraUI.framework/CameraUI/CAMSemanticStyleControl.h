@class UIView, NSString, CEKEdgeGradientView, UIButton, NSMutableArray, CAMSemanticStyle, UILabel, CEKExpandingSlider;

@interface CAMSemanticStyleControl : UIControl <UIGestureRecognizerDelegate, CEKExpandingSliderDelegate>

@property (readonly, nonatomic) CEKExpandingSlider *_toneSlider;
@property (readonly, nonatomic) CEKExpandingSlider *_warmthSlider;
@property (readonly, nonatomic) NSMutableArray *_allSliders;
@property (readonly, nonatomic) UILabel *_descriptionLabel;
@property (readonly, nonatomic) UIButton *_resetButton;
@property (readonly, nonatomic) UIView *_gradientContainer;
@property (readonly, nonatomic) CEKEdgeGradientView *_edgeGradients;
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle;
@property (nonatomic) struct { double startInset; double endInset; } gradientInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSemanticStyle:(id)a0 animated:(BOOL)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleSliderDidChangeValue:(id)a0;
- (void)sliderWillCollapse:(id)a0;
- (void)sliderWillExpand:(id)a0;
- (void)_handleResetButtonReleased:(id)a0;
- (void)_handleResetMenuItem:(id)a0;
- (void)_updateResetButtonImage;
- (void)_updateSlidersAnimated:(BOOL)a0;
- (void)_updateSubviewsVisibilityWithDuration:(double)a0 delay:(double)a1;

@end
