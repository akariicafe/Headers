@protocol MTLComputePipelineState, MTLBuffer, MTLLibrary, MTLCommandQueue, MTLDeviceSPI;

@interface Tiling : FRCMetalBase {
    id<MTLDeviceSPI> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _mtlLibrary;
    id<MTLComputePipelineState> _assembleKernel;
    id<MTLComputePipelineState> _assembleTwoTileKernel;
    unsigned int _tileOverlap;
    id<MTLBuffer> _tileParameters;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)assemble2TilesToCommandBuffer:(id)a0 from:(id *)a1 to:(id)a2 tileInfo:(struct { unsigned int x0; unsigned int x1; unsigned int x2; } *)a3;
- (void)assemble3TilesToCommandBuffer:(id)a0 from:(id *)a1 to:(id)a2 tileInfo:(struct { unsigned int x0; unsigned int x1; unsigned int x2; } *)a3;
- (void)assembleTiles:(struct __CVBuffer **)a0 to:(struct __CVBuffer { } *)a1 tileInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a2 numTiles:(long long)a3;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)createTileInfoArrayForFrameWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 numTiles:(unsigned long long)a2;
- (void)encodeTileBufferToCommandBuffer:(id)a0 from:(struct __CVBuffer { } *)a1 to:(struct __CVBuffer **)a2 channels:(long long)a3 tileInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a4 numTiles:(long long)a5;
- (void)encodeTilingToCommandBuffer:(id)a0 from:(id)a1 to:(id)a2 verticalOffset:(unsigned long long)a3 sourceHeight:(unsigned long long)a4;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;

@end
