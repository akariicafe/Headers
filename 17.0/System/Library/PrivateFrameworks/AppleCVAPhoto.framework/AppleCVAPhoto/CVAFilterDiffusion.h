@protocol MTLPipelineLibrarySPI, MTLComputePipelineState, MTLResourceGroupSPI, MTLLibrary, MTLTexture, MTLBuffer, MTLDeviceSPI;

@interface CVAFilterDiffusion : ImageSaverRegistrator {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    unsigned long long _width;
    unsigned long long _height;
    float _edgeVariance;
    id<MTLTexture> _laplacian;
    id<MTLTexture> _tmpOut16_0;
    id<MTLTexture> _tmpOut16_1;
    id<MTLTexture> _tmpOut32_0;
    id<MTLTexture> _tmpOut32_1;
    id<MTLBuffer> _davidConfigImmutable;
    id<MTLBuffer> _edgeLaplacianConfigImmutable;
    id<MTLBuffer> _jacobiConfigImmutable;
    id<MTLComputePipelineState> _createEdgeLaplacianKernel;
    id<MTLComputePipelineState> _createDiffusionMapLaplacianKernel;
    id<MTLComputePipelineState> _laplacianJacobiKernel;
    id<MTLComputePipelineState> _laplacianDavidKernel;
    id<MTLResourceGroupSPI> _temporaryTextureGroup;
}

- (void)encodeToCommandBufferInternal:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 colorTexture:(id)a3 iterations:(unsigned int)a4;
- (void)encodeDavidIterationToCommandBufferInternal:(id)a0 priorTexture:(id)a1 confidenceTexture:(id)a2 sourceTexture:(id)a3 destinationTexture:(id)a4;
- (void)encodeEdgeLaplacianToCommandBuffer:(id)a0 colorTexture:(id)a1 outputLaplacian:(id)a2;
- (void).cxx_destruct;
- (void)encodeDiffusionMapLaplacianToCommandBuffer:(id)a0 diffusionMapTexture:(id)a1 outputLaplacian:(id)a2;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 bufferWidth:(unsigned long long)a3 bufferHeight:(unsigned long long)a4 edgeVariance:(float)a5 stepSize:(float)a6 error:(id *)a7;
- (void)encodeToCommandBuffer:(id)a0 priorTexture:(id)a1 sourceTexture:(id)a2 destinationTexture:(id)a3 diffusionMapTexture:(id)a4 confidenceTexture:(id)a5 iterations:(unsigned int)a6;

@end
