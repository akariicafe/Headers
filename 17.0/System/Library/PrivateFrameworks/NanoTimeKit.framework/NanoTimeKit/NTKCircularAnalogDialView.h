@class NSArray, NTKWhistlerAnalogColorPalette, CALayer, CLKDevice;

@interface NTKCircularAnalogDialView : UIView {
    CLKDevice *_device;
    unsigned long long _numberOfTicks;
    CALayer *_dialBackgroundLayer;
    CALayer *_ticksLayer;
    NSArray *_allSmallTicks;
    NSArray *_allHourTicks;
    NSArray *_smallMatchingHourTicks;
    double _tickPadding;
    NTKWhistlerAnalogColorPalette *_colorPalette;
    struct { BOOL smallTicksMatchingMinutes; BOOL hideHourTicks; struct CGSize { double width; double height; } hourTickSize; struct CGSize { double width; double height; } smallTickSize; } _options;
}

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_tickOpactiyAtIndex:(long long)a0 bezelTextWidthInRadius:(double)a1 invisibleTicksAlpha:(double)a2;
- (id)_instantaneousAnimationForKeyPath:(id)a0 value:(id)a1;
- (double)_tickOpactiyAtIndex:(long long)a0 bezelTextWidthInRadius:(double)a1 invisibleTicksAlpha:(double)a2 visibleTicksAlpha:(double)a3;
- (void)_toggleRasterization:(BOOL)a0;
- (void)applyColorTransitionFraction:(double)a0 fromColorPalette:(id)a1 toColorPalette:(id)a2;
- (void)applyColorTransitionFraction:(double)a0 fromFaceColorPalette:(id)a1 toFaceColorPalette:(id)a2;
- (void)cleanupAfterEdit;
- (void)fillDialTransitionWithFraction:(double)a0 bezelTextWidthRadians:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1 hideHourTicks:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1 smallTicksMatchingMinutes:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(struct { BOOL x0; BOOL x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; })a1 device:(id)a2;
- (BOOL)isTickIndexForHour:(unsigned long long)a0;
- (void)layoutLayerTicks:(id)a0 rotationAngleInDegree:(double)a1 smallTicks:(BOOL)a2;
- (void)prepareForEdit;
- (void)setDialBackgroundColor:(id)a0;
- (void)setHideHourTicks:(BOOL)a0;
- (void)setHourTicksOpacity:(double)a0 bezelTextWidthRadians:(double)a1;
- (void)showAllTicksInDial;
- (void)transitInvisibleTicksAlphaWithBezelTextWidthInRadius:(double)a0 invisbleTicksAlpha:(double)a1;
- (void)transitTicksWithInitialBezelTextWidthInRadius:(double)a0 finalBezelTextWidthInRadius:(double)a1 fraction:(double)a2;

@end
