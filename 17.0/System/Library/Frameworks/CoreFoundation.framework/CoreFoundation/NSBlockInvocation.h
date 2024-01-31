@interface NSBlockInvocation : NSInvocation

- (void)invokeSuper;
- (void)invoke;
- (SEL)selector;
- (void)setSelector:(SEL)a0;
- (void)invokeUsingIMP:(void /* function */ *)a0;

@end
