@interface ISInvocationRecorder : NSObject {
    id _target;
}

- (void)forwardInvocation:(id)a0;
- (id)init;
- (void)dealloc;
- (void)invokeInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithTarget:(id)a0;
- (id)adjustedTargetForSelector:(SEL)a0;

@end
