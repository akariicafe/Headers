@protocol MTLBuffer;

@interface PKMetalLiveStrokePaintRenderCacheBuffer : NSObject {
    id<MTLBuffer> _strokePointBuffer;
    unsigned long long _strokePointBufferOffset;
    id<MTLBuffer> _liveStrokePointBuffer;
    unsigned long long _liveStrokePointBufferOffset;
    unsigned long long _numVertices;
    unsigned long long _numPoints;
}

- (id)init;
- (void).cxx_destruct;

@end
