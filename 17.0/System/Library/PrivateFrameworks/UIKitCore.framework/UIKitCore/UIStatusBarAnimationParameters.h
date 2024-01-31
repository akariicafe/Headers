@class BSAnimationSettings;
@protocol _UIBasicAnimationFactory;

@interface UIStatusBarAnimationParameters : NSObject

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) long long curve;
@property (retain, nonatomic) id<_UIBasicAnimationFactory> animationFactory;
@property (nonatomic) BOOL skipFencing;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) BSAnimationSettings *bsAnimationSettings;

+ (id)fencingAnimation;
+ (void)animateWithParameters:(id)a0 fromCurrentState:(BOOL)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)animateWithParameters:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)animateWithParameters:(id)a0 fromCurrentState:(BOOL)a1 frameInterval:(double)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;

- (id)init;
- (BOOL)shouldAnimate;
- (id)initWithDefaultParameters;
- (id)initWithEmptyParameters;
- (void).cxx_destruct;

@end
