@class PKMetalBuffer;

@interface PKMetalParticleRenderCacheBuffer : NSObject {
    PKMetalBuffer *_pkUniformsBuffer;
    PKMetalBuffer *_pkStrokePointBuffer;
    unsigned long long _uniformsBufferOffset;
    unsigned long long _strokePointBufferOffset;
    unsigned long long _numVertices;
    unsigned long long _numParticles;
    unsigned long long _numPoints;
}

- (void).cxx_destruct;

@end
