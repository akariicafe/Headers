@class RCWeakRef;

@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy {
    RCWeakRef *_weakTarget;
    SEL _weakTargetSelector;
}

- (void)dealloc;
- (void)displayLinkFired:(id)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
