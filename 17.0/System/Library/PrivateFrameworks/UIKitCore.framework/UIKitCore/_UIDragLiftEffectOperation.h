@class NSSet, UIDragInteraction, UIViewPropertyAnimator;
@protocol UIDragInteractionContext;

@interface _UIDragLiftEffectOperation : NSObject

@property (retain, nonatomic) id<UIDragInteractionContext> context;
@property (retain, nonatomic) NSSet *items;
@property (retain, nonatomic) UIDragInteraction *interaction;
@property (readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator;

+ (id)defaultTimingParameters;

- (void).cxx_destruct;
- (id)initWithLiftAnimationDuration:(double)a0 liftTimingParameters:(id)a1;

@end
