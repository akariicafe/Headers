@class FigMetalContext;
@protocol MTLComputePipelineState, MTLSamplerState;

@interface GDCTransform : NSObject {
    id<MTLComputePipelineState> _pipelineStates[1];
    id<MTLSamplerState> _samplers[3];
    FigMetalContext *_metalContext;
}

- (struct { float x0[8]; struct { void /* unknown type, empty encoding */ x0[3]; } x1; float x2; float x3; int x4; BOOL x5; int x6; float x7; BOOL x8; })_legacyParametersToUniforms:(const struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9[9]; float x10[9]; struct CGSize { double x0; double x1; } x11; BOOL x12; int x13; struct *x14; int x15; float x16; BOOL x17; float x18; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x19; } *)a0 withScale:(float)a1 andMode:(int)a2;
- (int)transformFrom:(id)a0 to:(id)a1 withParameters:(const struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9[9]; float x10[9]; struct CGSize { double x0; double x1; } x11; BOOL x12; int x13; struct *x14; int x15; float x16; BOOL x17; float x18; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x19; } *)a2 withScale:(float)a3 withMode:(int)a4 andCommandBuffer:(id)a5;
- (void).cxx_destruct;
- (int)_setSamplersWithNormalizedCoordinates:(BOOL)a0;
- (int)_compileShaders;
- (id)initWithOptionalCommandQueue:(id)a0;

@end
