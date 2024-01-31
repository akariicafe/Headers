@class TSDMetalContext, NSArray;
@protocol MTLTexture;

@interface TSDMetalEdgeDistanceField : NSObject {
    TSDMetalContext *_metalContext;
    struct CGSize { double width; double height; } _textureSize;
    struct CGSize { double width; double height; } _resultTextureSize;
    struct CGSize { double width; double height; } _squareSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
    double _downsampleScale;
    id<MTLTexture> _inputTexture;
    NSArray *_exteriorTextures;
    NSArray *_interiorTextures;
    id<MTLTexture> _combineTexture;
    id<MTLTexture> _combineByteTexture;
    id<MTLTexture> _resultTexture;
}

+ (void)didEndWithDevice:(id)a0;
+ (id)distanceFieldTextureWithTexture:(id)a0 textureSize:(struct CGSize { double x0; double x1; })a1 maxDistance:(long long)a2 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 downsampleScale:(double)a4 floatTexture:(BOOL)a5 makeCPUReadable:(BOOL)a6 metalContext:(id)a7 capabilities:(id)a8;
+ (void)willBeginWithDevice:(id)a0;

- (void).cxx_destruct;
- (void)p_setupTextures;
- (id)initWithTexture:(id)a0 textureSize:(struct CGSize { double x0; double x1; })a1 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 downsampleScale:(double)a3 metalContext:(id)a4 capabilities:(id)a5;
- (id)p_combinedTexturesWithIndex:(unsigned long long)a0 floatTexture:(BOOL)a1 commandBuffer:(id)a2;
- (void)p_dispatchThreadgroupsWithEncoder:(id)a0 pipelineState:(id)a1 texture:(id)a2;
- (unsigned long long)p_floodTextures:(id)a0 currentIndex:(unsigned long long)a1 maxDistance:(long long)a2 commandBuffer:(id)a3;
- (id)p_gradientTextureWithCommandBuffer:(id)a0;
- (void)p_seedWithCommandBuffer:(id)a0 fromTexture:(id)a1 toTexture:(id)a2 invertSeed:(BOOL)a3;
- (void)p_writeWithCommandBuffer:(id)a0 intoSquareTexture:(id)a1;

@end
