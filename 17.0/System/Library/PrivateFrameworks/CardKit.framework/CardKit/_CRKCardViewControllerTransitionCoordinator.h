@class NSString, UIView;

@interface _CRKCardViewControllerTransitionCoordinator : NSObject <CRKAnimationCoordinating>

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (weak, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ initialSetup;
@property (copy, nonatomic) id /* block */ finalSetup;
@property (copy, nonatomic) id /* block */ animations;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
