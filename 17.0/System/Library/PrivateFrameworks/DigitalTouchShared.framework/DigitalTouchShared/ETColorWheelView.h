@class UIColor, ETColorGradientView;

@interface ETColorWheelView : DTSColorWheel {
    ETColorGradientView *_gradientView;
    double _originalRotation;
    double _originalPickerRotation;
    BOOL _handlingTouches;
}

@property (readonly, nonatomic) UIColor *selectedColor;

+ (double)pickerWidth;
+ (double)colorWheelWidth;
+ (struct CGColor { } *)pickerBorderColor;
+ (double)pickerDiameter;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (void)hideDoneButton;
- (void)animatePickerToOriginalPosition;
- (void)finishedTouches;
- (void)addPickerCircleForPaletteCircle:(id)a0;
- (void)beganTouches:(id)a0;
- (double)colorWheelDismissalRotation;
- (double)colorWheelRadius;
- (double)gradientWidth;
- (void)hideColorWheelPickingColor:(BOOL)a0;
- (void)hideDoneButtonAnimated;
- (double)pickerDiameter;
- (BOOL)pickerShouldDismissClockwise;
- (id)pickerViewHighlightedColor;
- (void)showColorWheelFromPaletteCircle:(id)a0 rotation:(double)a1;
- (void)showDoneButtonAnimated;

@end
