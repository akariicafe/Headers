@class CALayer, NSString, CAEmitterLayer;

@interface CKInvisibleInkImageEffectView : CKInvisibleInkEffectView <CAAnimationDelegate>

@property (retain, nonatomic) CALayer *blurredImageLayer;
@property (retain, nonatomic) CALayer *blurredImageContainerLayer;
@property (retain, nonatomic) CALayer *drawEmitterContainerLayer;
@property (retain, nonatomic) CAEmitterLayer *drawEmitterLayer;
@property (retain, nonatomic) CALayer *dustEmitterContainerLayer;
@property (retain, nonatomic) CAEmitterLayer *dustEmitterLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPaused:(BOOL)a0;
- (void)setSuspended:(BOOL)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)reset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)disableBlending;
- (void)endEmittersForTouchesCancelled:(id)a0;
- (void)addDustRandomEmitterAnimationsWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)enableBlending;
- (void)endDrawEmitterEffects;
- (void)endDustEmitterFingerEffects;
- (void)endEmittersForTouchesEnded:(id)a0;
- (void)moveEmittersForTouchesBegan:(id)a0;
- (void)moveEmittersForTouchesMoved:(id)a0;
- (void)moveEmittersWithTouches:(id)a0;
- (void)setRandomAttractorsEnabled:(BOOL)a0;
- (void)setupDrawEmitter;
- (void)setupDustEmitter;

@end
