@class NSArray, CAMediaTimingFunction;

@interface TSDContentAnimationGroup : TSDContentAnimation

@property (copy, nonatomic) NSArray *animations;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (void)dealloc;
- (id)i_animationWithTransformBlock:(id /* block */)a0;
- (BOOL)i_canProduceAnimation;
- (id)i_endLocation;

@end
