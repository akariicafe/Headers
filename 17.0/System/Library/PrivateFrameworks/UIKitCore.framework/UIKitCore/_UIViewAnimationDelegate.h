@class NSString;

@interface _UIViewAnimationDelegate : NSObject <CAAnimationDelegate> {
    id /* block */ _completionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
