@class NSString, UISlider, UISliderDataModel, _UIFluidSliderInteraction;

@interface _UISlideriOSFluidVisualElement : _UISlideriOSVisualElement <_UIFluidSliderDirectDrivingDelegate, _UISliderFluidStyleVisualElement> {
    _UIFluidSliderInteraction *_fluidInteraction;
    double _thumbPosition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _trackBounds;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _trackTransform;
    BOOL _overriddenTrackingState;
    unsigned long long _fluidUpdateSource;
}

@property (nonatomic) BOOL changeWithVolumeButtons;
@property (readonly, nonatomic) unsigned long long fluidUpdateSource;
@property (weak, nonatomic) UISlider *slider;
@property (retain, nonatomic) UISliderDataModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cancelTouchTracking;
- (void)didSetValues;
- (void)_controlTouchMoved:(id)a0 withEvent:(id)a1;
- (BOOL)cancelMouseTracking;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupFeedback;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_controlTouchEnded:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_controlTouchBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)didSetEnabled;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_modifiedTrackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setValue:(float)a0 minimum:(float)a1 maximum:(float)a2 animated:(BOOL)a3;
- (void)_setupInteraction;
- (void)_updateConfigurationForFrameChange:(BOOL)a0;
- (void)_updateModelValue:(double)a0 sendAction:(BOOL)a1;
- (id)_updatedConfigurationForTrackSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSetFluidTrackHidden;
- (void)didSetUserInteractionEnabled;
- (BOOL)driver:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)overriddenTrackingState;

@end
