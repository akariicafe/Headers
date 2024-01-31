@interface QLDelegateProxy : NSProxy

@property (weak) id firstDelegate;
@property (weak) id secondDelegate;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
