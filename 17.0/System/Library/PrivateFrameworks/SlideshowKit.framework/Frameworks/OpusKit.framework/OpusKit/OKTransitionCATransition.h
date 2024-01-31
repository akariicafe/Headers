@class CATransition;

@interface OKTransitionCATransition : OKTransitionParallaxPush {
    CATransition *_transition;
}

- (void)dealloc;
- (id)animation;
- (void)_transitionInView:(id)a0 fromSubview:(id)a1 toSubview:(id)a2 wasInteractive:(BOOL)a3 duration:(double)a4 doEaseIn:(BOOL)a5 doEaseOut:(BOOL)a6 isCompleting:(BOOL)a7 wasCancelled:(BOOL)a8 fromProgress:(double)a9 completionHandler:(id /* block */)a10;
- (void)prepareInView:(id)a0;

@end
