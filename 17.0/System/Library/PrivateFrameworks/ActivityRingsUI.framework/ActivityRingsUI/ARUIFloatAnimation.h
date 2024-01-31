@class NSString, CAMediaTimingFunction;
@protocol ARUIRingGroupAnimationDelegate;

@interface ARUIFloatAnimation : NSObject <ARUIRingGroupAnimation> {
    double _percent;
    id /* block */ _applier;
    BOOL _completed;
}

@property (weak, nonatomic) id<ARUIRingGroupAnimationDelegate> delegate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float startValue;
@property (readonly, nonatomic) float currentValue;
@property (readonly, nonatomic) float endValue;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationWithDuration:(double)a0 startValue:(float)a1 endValue:(float)a2 timingFunction:(id)a3 applier:(id /* block */)a4;

- (void)update:(double)a0;
- (void)dealloc;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)completeAnimation;
- (id)initWithDuration:(double)a0 startValue:(float)a1 endValue:(float)a2 timingFunction:(id)a3 applier:(id /* block */)a4;

@end
