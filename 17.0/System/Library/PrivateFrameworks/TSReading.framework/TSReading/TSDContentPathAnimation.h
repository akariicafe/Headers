@class NSArray, CAMediaTimingFunction, TSDContentPath;

@interface TSDContentPathAnimation : TSDContentAnimation

@property (copy, nonatomic) NSArray *contentLocations;
@property (copy, nonatomic) TSDContentPath *contentPath;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (copy, nonatomic) NSArray *keyTimes;
@property (copy, nonatomic) NSArray *timingFunctions;

- (void)dealloc;
- (id)i_animationWithTransformBlock:(id /* block */)a0;
- (BOOL)i_canProduceAnimation;
- (id)i_endLocation;

@end
