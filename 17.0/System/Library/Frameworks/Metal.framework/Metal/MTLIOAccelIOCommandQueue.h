@interface MTLIOAccelIOCommandQueue : _MTLIOCommandQueue

- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;

@end
