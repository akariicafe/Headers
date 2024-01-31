@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    int _deadlineAwareState;
}

- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBufferWithDescriptor:(id)a0;
- (void)insertDebugCaptureBoundary;
- (void)validateDeadlineAwareness:(id)a0;

@end
