@class UIView;

@interface HULayoutTransition : NSObject

@property (readonly, copy, nonatomic) id /* block */ setupBlock;
@property (readonly, copy, nonatomic) id /* block */ transitionBlock;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id fromState;
@property (retain, nonatomic) id toState;
@property (nonatomic) unsigned long long phase;
@property (readonly, nonatomic) UIView *view;

- (id)init;
- (void).cxx_destruct;
- (void)completeTransition;
- (void)executeTransition;
- (id)initWithView:(id)a0 setupBlock:(id /* block */)a1 transitionBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)setupTransitionWithFromState:(id)a0 toState:(id)a1;

@end
