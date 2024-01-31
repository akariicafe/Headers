@interface FigDeferredTransactionReleaseTrigger : NSObject {
    id /* block */ _blockToCallOnRelease;
}

- (void)dealloc;
- (id)initWithReleaseBlock:(id /* block */)a0;

@end
