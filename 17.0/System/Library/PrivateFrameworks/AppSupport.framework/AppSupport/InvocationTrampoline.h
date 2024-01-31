@interface InvocationTrampoline : NSObject

@property (retain) id target;

- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)performInvocation:(id)a0;

@end
