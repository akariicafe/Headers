@class MTLPipelineBufferDescriptorArrayInternal, NSString, MTLStageInputOutputDescriptor, NSDictionary, MTLProfileControl, NSArray, MTLLinkedFunctions;
@protocol MTLFunction, MTLPipelineLibrary;

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {
    struct MTLComputePipelineDescriptorPrivate { NSString *label; id<MTLFunction> computeFunction; BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth; unsigned short maxTotalThreadsPerThreadgroup; MTLStageInputOutputDescriptor *stageInputDescriptor; NSDictionary *driverCompilerOptions; NSDictionary *gpuCompilerSPIOptions; MTLPipelineBufferDescriptorArrayInternal *buffers; NSArray *binaryArchives; union { NSArray *preloadedLibraries; NSArray *insertLibraries; } ; id<MTLPipelineLibrary> pipelineLibrary; BOOL supportIndirectCommandBuffers; long long textureWriteRoundingMode; BOOL forceResourceIndex; unsigned long long resourceIndex; NSDictionary *pluginData; BOOL needsCustomBorderColorSamplers; unsigned char openGLMode : 1; unsigned char openCLMode : 1; unsigned int reserved : 30; NSArray *functionPointers; MTLLinkedFunctions *linkedFunctions; unsigned long long maxStackCallDepth; BOOL supportAddingBinaryFunctions; MTLProfileControl *profileControl; unsigned long long maxAccelerationStructureTraversalDepth; } _private;
}

- (id)pipelineLibrary;
- (BOOL)openGLModeEnabled;
- (void)setPipelineLibrary:(id)a0;
- (const struct MTLComputePipelineDescriptorPrivate { id x0; id x1; BOOL x2; unsigned short x3; id x4; id x5; id x6; id x7; id x8; union { id x0; id x1; } x9; id x10; BOOL x11; long long x12; BOOL x13; unsigned long long x14; id x15; BOOL x16; unsigned char x17 : 1; unsigned char x18 : 1; unsigned int x19 : 30; id x20; id x21; unsigned long long x22; BOOL x23; id x24; unsigned long long x25; } *)_descriptorPrivate;
- (id)binaryArchives;
- (void)setBinaryArchives:(id)a0;
- (void)setPluginData:(id)a0;
- (void)setNeedsCustomBorderColorSamplers:(BOOL)a0;
- (id)buffers;
- (void)setOpenGLModeEnabled:(BOOL)a0;
- (void)setResourceIndex:(unsigned long long)a0;
- (BOOL)openCLModeEnabled;
- (id)pluginData;
- (void)setForceResourceIndex:(BOOL)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)supportIndirectCommandBuffers;
- (void)validateWithDevice:(id)a0;
- (unsigned long long)resourceIndex;
- (id)newSerializedComputeData;
- (id)init;
- (unsigned long long)hash;
- (unsigned long long)maxAccelerationStructureTraversalDepth;
- (void)reset;
- (void)dealloc;
- (void)setMaxCallStackDepth:(unsigned long long)a0;
- (id)insertLibraries;
- (BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)setSupportIndirectCommandBuffers:(BOOL)a0;
- (id)binaryLibraries;
- (void)setPreloadedLibraries:(id)a0;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (BOOL)needsCustomBorderColorSamplers;
- (void)setLinkedFunctions:(id)a0;
- (void)setStageInputDescriptor:(id)a0;
- (id)label;
- (id)newPipelineScript;
- (id)linkedFunctions;
- (id)computeFunction;
- (id)newSerializedComputeDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)setLabel:(id)a0;
- (long long)textureWriteFPRoundingMode;
- (void)setDriverCompilerOptions:(id)a0;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)a0;
- (id)stageInputDescriptor;
- (id)description;
- (id)functionPointers;
- (void)setComputeFunction:(id)a0;
- (void)setBinaryLibraries:(id)a0;
- (id)driverCompilerOptions;
- (BOOL)forceResourceIndex;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (id)preloadedLibraries;
- (void)setGpuCompilerSPIOptions:(id)a0;
- (unsigned long long)maxCallStackDepth;
- (long long)textureWriteRoundingMode;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (id)dynamicLibraries;
- (void)setSupportAddingBinaryFunctions:(BOOL)a0;
- (id)gpuCompilerSPIOptions;
- (void)setOpenCLModeEnabled:(BOOL)a0;
- (void)setTextureWriteFPRoundingMode:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (BOOL)supportAddingBinaryFunctions;
- (id)profileControl;
- (void)setFunctionPointers:(id)a0;
- (void)setProfileControl:(id)a0;
- (void)setDynamicLibraries:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInsertLibraries:(id)a0;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)a0;

@end
