@class NSString, NSMutableDictionary, CALayer, CABasicAnimation;

@interface TUIGlowEffect : NSObject <CAAnimationDelegate> {
    CABasicAnimation *_pulseAnimation;
    CABasicAnimation *_radiusAnimation;
    CABasicAnimation *_colorAnimation;
    NSMutableDictionary *_animationStates;
}

@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) struct CGColor { } *tintColor;
@property (nonatomic) BOOL pulsing;
@property (nonatomic) double pulseInterval;
@property (nonatomic) double minimumRadius;
@property (nonatomic) double pulseRadius;
@property (nonatomic) double nonPulseRadius;
@property (nonatomic) double blurRadius;
@property (nonatomic) struct CAFrameRateRange { float minimum; float maximum; float preferred; } preferredFrameRateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)adjustVisibilityForDarkMode:(BOOL)a0 tintColor:(struct CGColor { } *)a1 alpha:(double)a2 outTintColor:(struct CGColor **)a3 outAlpha:(double *)a4;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)setTintColor:(struct CGColor { } *)a0 animated:(BOOL)a1 duration:(double)a2 autoreverses:(BOOL)a3 repeatCount:(double)a4;
- (void)setTintColor:(struct CGColor { } *)a0 animated:(BOOL)a1 duration:(double)a2;
- (id)estimateAnimationValueForKeyPath:(id)a0;
- (void)recordAnimation:(id)a0 duration:(double)a1 fromValue:(id)a2 toValue:(id)a3 keyPath:(id)a4;
- (void)setNonPulseRadius:(double)a0 animated:(BOOL)a1 duration:(double)a2;
- (void)setupFilters;
- (void)updatePropertyForKeyPath:(id)a0 oldValue:(id)a1 newValue:(id)a2 animated:(BOOL)a3 duration:(double)a4 autoreverses:(BOOL)a5 repeatCount:(double)a6;
- (void)updatePulseAnimationRadius;

@end
