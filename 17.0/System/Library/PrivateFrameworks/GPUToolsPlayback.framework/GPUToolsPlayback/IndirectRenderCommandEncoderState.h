@protocol MTLBuffer, MTLRenderPipelineState;

@interface IndirectRenderCommandEncoderState : NSObject {
    id<MTLRenderPipelineState> _pipelineState;
    id<MTLBuffer> _vertexBuffers[31];
    void *_vertexBytes[31];
    unsigned long long _vertexBufferOffsets[31];
    unsigned long long _vertexBytesLength[31];
    id<MTLBuffer> _fragmentBuffers[31];
    void *_fragmentBytes[31];
    unsigned long long _fragmentBufferOffsets[31];
    unsigned long long _fragmentBytesLength[31];
}

+ (id)saveEncoder:(id)a0 withDescriptor:(id)a1 player:(id)a2;

- (void).cxx_destruct;
- (void)restoreEncoder:(id)a0 withDescriptor:(id)a1;

@end
