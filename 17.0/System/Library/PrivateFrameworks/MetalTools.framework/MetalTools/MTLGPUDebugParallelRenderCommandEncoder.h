@interface MTLGPUDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    unsigned int _encoderID;
}

- (id)renderCommandEncoder;
- (id)initWithParallelRenderCommandEncoder:(id)a0 parent:(id)a1 descriptor:(id)a2 encoderID:(unsigned int)a3;

@end
