@protocol MTLRenderPipelineState;

@interface ARCoachingDotsRenderer : NSObject {
    unsigned long long _pixelFormat;
    id<MTLRenderPipelineState> _pipelineState;
}

- (void).cxx_destruct;
- (void)encode:(id)a0 renderCommandEncoder:(id)a1 mvp:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 visibility:(float)a3 renderParams:(struct { float x0; float x1; float x2; float x3; })a4 time:(double)a5;
- (id)init:(id)a0 pixelFormat:(unsigned long long)a1 metalLibrary:(id)a2 sampleCount:(int)a3;

@end
