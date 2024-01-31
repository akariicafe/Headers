@interface SCNMTLShadable : NSObject {
    id _vertexBuffers[31];
    id _fragmentBuffers[31];
    id _vertexTextures[31];
    id _fragmentTextures[31];
    id _vertexSamplers[16];
    id _fragmentSamplers[16];
}

@property (nonatomic) long long materialModificationCount;
@property (nonatomic) long long geometryModificationCount;

- (void)dealloc;
- (id)bufferAtIndices:(struct { char x0; char x1; })a0;
- (id)samplerAtIndices:(struct { char x0; char x1; })a0;
- (void)setResource:(id)a0 ofType:(unsigned long long)a1 atIndices:(struct { char x0; char x1; })a2;
- (id)textureAtIndices:(struct { char x0; char x1; })a0;

@end
