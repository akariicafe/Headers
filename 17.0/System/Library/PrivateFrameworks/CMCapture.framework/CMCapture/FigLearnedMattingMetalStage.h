@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface FigLearnedMattingMetalStage : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _createTileWithScaleKernel;
    id<MTLComputePipelineState> _pasteTileKernel;
    id<MTLComputePipelineState> _clearTextureKernel;
    struct __CVMetalTextureCache { } *_textureCache;
}

- (id)init;
- (void)dealloc;
- (void)finishProcessing;
- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)clearBuffer:(struct __CVBuffer { } *)a0;
- (int)createTileFrom:(SEL)a0 to:(struct __CVBuffer { } *)a1 withStart:(struct __CVBuffer { } *)a2 commandBuffer:(id)a3;
- (int)createTileFrom:(id)a0 to:(SEL)a1 withStart:(struct __CVBuffer { } *)a2 withScale:(struct __CVBuffer { } *)a3 outCommandBuffer:(id *)a4;
- (int)pasteTileFrom:(id)a0 to:(SEL)a1 withStart:(struct __CVBuffer { } *)a2 withNoOverlapStart:(struct __CVBuffer { } *)a3 withNoOverlapEnd:(id *)a4 outCommandBuffer:(void /* unknown type, empty encoding */)a5;

@end
