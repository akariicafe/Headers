@class CAGradientLayer, NSArray, UIImageView, NTKColorSliderThumbView, UISelectionFeedbackGenerator;
@protocol NTKColorSliderDelegate;

@interface NTKColorSlider : UISlider {
    UIImageView *_thumbView;
    NTKColorSliderThumbView *_thumbContent;
    long long _layoutDirection;
    CAGradientLayer *_trackLayer;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    BOOL _shouldTriggerMidpointFeedback;
}

@property (weak, nonatomic) id<NTKColorSliderDelegate> delegate;
@property (retain, nonatomic) NSArray *colors;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTrackFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (id)currentMinimumTrackImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createThumbView;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)currentMaximumTrackImage;
- (void)layoutSubviews;
- (double)_colorGradientStep;
- (void)_setValue:(float)a0 animated:(BOOL)a1;
- (void)_updateThumbColor;
- (BOOL)_valueIsInsideMidpoint:(float)a0;
- (void)valueDidChange:(id)a0 forEvent:(id)a1;

@end
