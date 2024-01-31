@class _UISliderFluidConfiguration, NSString, NSHashTable, MRUVisualStylingProvider, UIView;

@interface MRUSlider : UISlider <_UISliderFluidInteractionDelegate, MRUVisualStylingProviderObserver>

@property (retain, nonatomic) _UISliderFluidConfiguration *configuration;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitRectInset;
@property (nonatomic) double expansionFactor;
@property (nonatomic) double stretchLimit;
@property (nonatomic) BOOL minimumTrackVisible;
@property (retain, nonatomic) UIView *minimumValueView;
@property (retain, nonatomic) UIView *maximumValueView;
@property (nonatomic) BOOL fluidTrackHidden;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic, getter=isEqualizing) BOOL equalizing;
@property (copy, nonatomic) id /* block */ animations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (void)_sliderFluidInteractionWillBegin:(id)a0 withLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_sliderFluidInteractionWillEnd:(id)a0;
- (void)_sliderFluidInteractionWillContinue:(id)a0 withLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)addObserver:(id)a0;
- (void)_sliderFluidInteractionWillExtend:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
