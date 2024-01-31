@interface PLAutoBindingBlackholeProxy : NSProxy {
    id _targetObject;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithTargetObject:(id)a0;

@end
