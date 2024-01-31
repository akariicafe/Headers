@class ARUISpriteSheet, ARUIRingGroup;

@interface ARUIRingGroupController : ARUIAnimatableObject

@property (readonly, nonatomic) long long numberOfRings;
@property (readonly, nonatomic) ARUIRingGroup *ringGroup;
@property (retain, nonatomic) ARUISpriteSheet *spriteSheet;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) float emptyOpacity;
@property (nonatomic) float opacity;
@property (nonatomic) float ringDiameter;
@property (nonatomic) float ringIconSize;
@property (nonatomic) float ringInterspacing;
@property (nonatomic) float ringThickness;
@property (nonatomic) float ringScale;
@property (nonatomic) float trackOpacity;
@property (nonatomic) float zRotation;
@property (nonatomic) double backingOrigin;
@property (nonatomic) double additionalSpacingAtIndex;

+ (double)defaultAnimationDuration;
+ (id)animationTimingFunction;
+ (id)ringGroupControllerConfiguredForCompanionWithRingType:(long long)a0 withIcon:(BOOL)a1;
+ (id)ringGroupControllerConfiguredForWatchWithRingType:(long long)a0 withIcon:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addAnimation:(id)a0 forRingGroupPropertyType:(unsigned long long)a1;
- (void)addCelebration:(id)a0 toRingAtIndex:(long long)a1;
- (void)addOpacityAnimation:(id)a0 forRingAtIndex:(long long)a1;
- (float)diameterForRingAtIndex:(unsigned long long)a0;
- (id)initWithNumberOfRings:(long long)a0;
- (id)initWithRingGroup:(id)a0;
- (void)removeCelebration:(id)a0 fromRingAtIndex:(long long)a1;
- (void)setActiveEnergyPercentage:(double)a0 animated:(BOOL)a1;
- (void)setActiveEnergyPercentage:(double)a0 briskPercentage:(double)a1 movingHoursPercentage:(double)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)setBriskPercentage:(double)a0 animated:(BOOL)a1;
- (void)setDotPercentage:(double)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)setIconDotTextureOrigin:(struct CGPoint { double x0; double x1; })a0 ofRingAtIndex:(long long)a1;
- (void)setIconFirstFrameOrigin:(struct CGPoint { double x0; double x1; })a0 frameSize:(struct CGSize { double x0; double x1; })a1 frameCount:(long long)a2 columns:(long long)a3 ofRingAtIndex:(long long)a4;
- (void)setMovingHoursPercentage:(double)a0 animated:(BOOL)a1;
- (void)setOpacity:(double)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)setPercentage:(double)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)setPercentage:(double)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)setPercentage:(double)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2 duration:(double)a3 timingFunction:(id)a4 completion:(id /* block */)a5;
- (void)setRingDiameter:(double)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)setRingIconPosition:(struct CGPoint { double x0; double x1; })a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)setRingIconSize:(double)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)setRingInterspacing:(double)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)setRingThickness:(double)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)setTopColor:(id)a0 bottomColor:(id)a1;
- (void)setTopColor:(id)a0 bottomColor:(id)a1 contrastColor:(id)a2 ofRingAtIndex:(long long)a3;
- (void)setTopColor:(id)a0 bottomColor:(id)a1 ofRingAtIndex:(long long)a2;

@end
