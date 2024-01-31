@class UIHoverGestureRecognizer, NSString, NSArray, UISelectionFeedbackGenerator, UIView, UITapGestureRecognizer;

@interface CCUISteppedSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate> {
    NSArray *_stepBackgroundViews;
    NSArray *_separatorViews;
    UIView *_stepViewsContainer;
    float _valueAdjustedForSteppedSlider;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _hoverStep;
    BOOL _isHoverHighlighting;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
}

@property (nonatomic) unsigned long long numberOfSteps;
@property (nonatomic) BOOL firstStepIsDisabled;
@property (nonatomic) BOOL firstStepIsOff;
@property (nonatomic) unsigned long long step;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setValueVisible:(BOOL)a0;
- (void)layoutElasticContentViews;
- (id)_createBackgroundViewForStep:(unsigned long long)a0;
- (float)_valueForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setContinuousSliderCornerRadius:(double)a0;
- (void)_createSeparatorViewsForNumberOfSteps:(unsigned long long)a0;
- (id)_additionalTopLevelBlockingGestureRecognizers;
- (void)_createStepViewsForNumberOfSteps:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createSeparatorView;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)_handleHoverGestureRecognizer:(id)a0;
- (unsigned long long)_stepFromValue:(float)a0;
- (float)_valueFromStep:(unsigned long long)a0;
- (void)_updateStepViewVisibility;
- (void).cxx_destruct;
- (void)_updateStepFromValue:(float)a0 toggleCurrentStep:(BOOL)a1 andUpdateValue:(BOOL)a2;
- (void)_handleValueTapGestureRecognizer:(id)a0;
- (void)_layoutStepViews;
- (void)contentModuleWillTransitionToExpandedContentMode:(BOOL)a0;
- (unsigned long long)_stepFromValue:(float)a0 avoidCurrentStep:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)didMoveToWindow;
- (void)setValue:(float)a0 isAdjusted:(BOOL)a1 andUpdateStep:(BOOL)a2 animated:(BOOL)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
