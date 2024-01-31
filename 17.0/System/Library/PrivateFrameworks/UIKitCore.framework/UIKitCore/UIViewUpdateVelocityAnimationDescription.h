@protocol UIVectorOperatable;

@interface UIViewUpdateVelocityAnimationDescription : NSObject

@property (retain, nonatomic) id<UIVectorOperatable> velocity;
@property (retain, nonatomic) id<UIVectorOperatable> targetVelocity;

+ (id)descriptionWithVelocity:(id)a0 targetVelocity:(id)a1;

- (id)initWithVelocity:(id)a0 targetVelocity:(id)a1;
- (void).cxx_destruct;

@end
