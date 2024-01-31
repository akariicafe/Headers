@class UIView, SXComponentView, SXComponentBehavior;

@interface SXComponentBehaviorHandler : NSObject

@property (readonly, nonatomic) SXComponentView *componentView;
@property (readonly, nonatomic) SXComponentBehavior *behavior;
@property (readonly, nonatomic) UIView *behaviorView;
@property (readonly, nonatomic) BOOL isSetup;
@property (readonly, nonatomic) BOOL requiresContinuousUpdates;

- (void).cxx_destruct;
- (void)destroyWithBehaviorController:(id)a0;
- (id)initWithComponentView:(id)a0 withBehavior:(id)a1;
- (void)setupWithBehaviorController:(id)a0;
- (void)updateWithBehaviorController:(id)a0;

@end
