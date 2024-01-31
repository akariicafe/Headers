@class Protocol;

@interface SUResponderChainInvocationRecorder : ISInvocationRecorder {
    Protocol *_protocol;
}

- (void)invokeInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (id)adjustedTargetForSelector:(SEL)a0;
- (id)_targetForSelector:(SEL)a0 sender:(id)a1;

@end
