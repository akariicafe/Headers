@class NSString, ETPaletteCircleView, UIView, ETColorWheelView, UITapGestureRecognizer;
@protocol ETColorPickerViewDelegate;

@interface ETColorPickerView : DTSColorPicker <DTSColorWheelDelegate> {
    UIView *_contentView;
    ETPaletteCircleView *_collapsedSelectedCircle;
    UITapGestureRecognizer *_presentTapGestureRecognizer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _expandedFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _collapsedFrame;
    ETColorWheelView *_colorWheelView;
    BOOL _dismissingColorPicker;
    double _selectedCircleRotationAngle;
}

@property (nonatomic) BOOL isExpanded;
@property (weak, nonatomic) id<ETColorPickerViewDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDimmed:(BOOL)a0;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)presentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)animateOnscreen;
- (void)_addRotationAnimationFromAngle:(double)a0 toAngle:(double)a1;
- (BOOL)_isCenterCircle:(unsigned long long)a0;
- (void)animateOffscreen;
- (void)animateToGray;
- (void)animateToSelectedColor;
- (void)colorWheel:(id)a0 didPickColor:(id)a1;
- (void)colorWheel:(id)a0 willPickColor:(id)a1;
- (void)fadeinPaletteCircle:(id)a0 delay:(double)a1;
- (void)fadeinPaletterCirclesInPairs;
- (void)fadeoutPaletteCircle:(id)a0 delay:(double)a1;
- (void)fadeoutPaletterCirclesInPairs;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collapsedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutPaletteCircles;
- (void)movePalettCircleToOriginalLayoutPosition:(id)a0;
- (void)movePaletteCircleTowardsViewCenter:(id)a0 distance:(double)a1;
- (id)paletteCircleAnimationPairs;
- (void)paletteCircleTapped:(id)a0;
- (void)presentTapReceived:(id)a0;
- (void)showColorWheel;
- (void)transformPickerCircleToSelectionMarkerWithCompletion:(id /* block */)a0;
- (void)transformSelectionMarkerToPickerCircleWithCompletion:(id /* block */)a0;

@end
