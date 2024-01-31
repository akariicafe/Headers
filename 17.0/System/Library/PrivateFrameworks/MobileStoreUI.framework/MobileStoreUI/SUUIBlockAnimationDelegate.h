@interface SUUIBlockAnimationDelegate : NSObject {
    id /* block */ _block;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
