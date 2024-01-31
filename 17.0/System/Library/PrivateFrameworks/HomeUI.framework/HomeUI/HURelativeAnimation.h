@class HUAnimationApplier;

@interface HURelativeAnimation : NSObject

@property (readonly, nonatomic) HUAnimationApplier *applier;
@property (readonly, nonatomic) double relativeStart;
@property (readonly, nonatomic) double relativeDuration;

- (void).cxx_destruct;
- (id)initWithAnimationApplier:(id)a0 relativeStart:(double)a1 relativeDuration:(double)a2;

@end
