@class SBMainWorkspace, SBStartupTransitionContext;

@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition>

@property (readonly, nonatomic) SBMainWorkspace *mainWorkspace;
@property (readonly, nonatomic) SBStartupTransitionContext *context;
@property (readonly, nonatomic) unsigned long long destination;

- (void)_begin;
- (void).cxx_destruct;
- (id)initWithDestination:(unsigned long long)a0 context:(id)a1;
- (void)performTransitionWithCompletionBlock:(id /* block */)a0;

@end
