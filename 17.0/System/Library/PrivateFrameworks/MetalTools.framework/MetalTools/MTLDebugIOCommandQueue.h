@interface MTLDebugIOCommandQueue : MTLToolsIOCommandQueue

- (unsigned long long)globalTraceObjectID;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (void)barrier;

@end
