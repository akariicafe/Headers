@class UIColor, NSString, NSArray, NTKExplorerDotColorOptions, NTKExplorerDotLayoutConstraints;
@protocol CLKMonochromeFilterProvider;

@interface NTKExplorerStatusView : UIView <CLKMonochromeComplicationView> {
    NSArray *_dotLayers;
}

@property (readonly) double dotDiameter;
@property (readonly) double dotBorderWidth;
@property (readonly) double dotSpacing;
@property (readonly) double noServiceDotHeight;
@property (readonly, nonatomic) UIColor *connectedDotColor;
@property (readonly, nonatomic) UIColor *connectedDotBackgroundColor;
@property (readonly, nonatomic) UIColor *noServiceDotColor;
@property (retain, nonatomic) NTKExplorerDotLayoutConstraints *dotLayoutConstraints;
@property (retain, nonatomic) NTKExplorerDotColorOptions *dotColorOptions;
@property (nonatomic) long long signalStrengthBars;
@property (nonatomic) BOOL showsFullSignalStrength;
@property (nonatomic) BOOL tritiumIsOn;
@property (nonatomic) long long state;
@property (readonly, nonatomic) long long position;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_fixedDotPositionForState:(long long)a0;
+ (id)connectedDotColor;
+ (double)dotBorderWidth;
+ (double)dotDiameter;
+ (double)dotSpacing;
+ (id)noServiceDotColor;
+ (double)noServiceDotHeight;

- (void)setState:(long long)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_applyDotRotationFraction:(double)a0 forDotAtIndex:(unsigned long long)a1;
- (void)_applyState:(long long)a0 animated:(BOOL)a1;
- (void)_layoutDotLayers;
- (void)_updateDotFillStates;
- (id)connectivityDotBackingColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dotLayoutConstraints:(id)a1 dotColorOptions:(id)a2;
- (void)setDotPosition:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
