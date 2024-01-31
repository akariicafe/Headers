@interface IOGPUMetalParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (unsigned long long)getType;
- (void)pushDebugGroup:(id)a0;
- (void)setLabel:(id)a0;
- (BOOL)isMemorylessRender;
- (void)popDebugGroup;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
