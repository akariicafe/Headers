@class NSString, UIView, FIUIBreathingPetalRingMetalRenderer, MTKView;
@protocol FIUIDeepBreathingPetalRingViewDelegate;

@interface FIUIBreathingPetalRingMetalView : UIView <FIUIBreathingPetalRingViewDrawable>

@property (retain, nonatomic) MTKView *mtkView;
@property (retain, nonatomic) FIUIBreathingPetalRingMetalRenderer *renderer;
@property (weak, nonatomic) id<FIUIDeepBreathingPetalRingViewDelegate> petalRingDelegate;
@property (nonatomic) struct CGPoint { double x0; double x1; } ringCenter;
@property (nonatomic) float ringRadius;
@property (readonly, nonatomic) long long numberOfPetals;
@property (readonly, nonatomic) long long numberOfVisiblePetals;
@property (readonly, nonatomic) BOOL showBlurTrails;
@property (nonatomic) float preferredFramesPerSecond;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)importDataFromPetalRing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfPetals:(long long)a1 showBlurTrails:(BOOL)a2 device:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 petalColor:(long long)a1 numberOfPetals:(long long)a2 showBlurTrails:(BOOL)a3 device:(id)a4;
- (void)setBlurTrailAtIndex:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(float)a2 blurriness:(float)a3 alpha:(float)a4;
- (void)setGradientRotationAngle:(float)a0;
- (void)setNumberOfVisiblePetals:(long long)a0 showBlurTrails:(BOOL)a1;
- (void)setPetalAtIndex:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(float)a2 alpha:(float)a3;

@end
