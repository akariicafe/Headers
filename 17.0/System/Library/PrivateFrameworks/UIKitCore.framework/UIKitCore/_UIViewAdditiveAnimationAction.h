@class UIViewPropertyAnimator, CAAnimation, UIView;

@interface _UIViewAdditiveAnimationAction : NSObject <CAAction>

@property (readonly, retain, nonatomic) CAAnimation *pendingAnimation;
@property (readonly, retain, nonatomic) UIViewPropertyAnimator *animationObject;
@property (readonly, retain, nonatomic) UIView *view;

- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (id)initWithPendingAnimation:(id)a0 withAnimationObject:(id)a1 forView:(id)a2;
- (void).cxx_destruct;

@end
