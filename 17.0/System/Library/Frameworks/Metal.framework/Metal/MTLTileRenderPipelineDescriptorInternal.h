@class MTLPipelineBufferDescriptorArrayInternal, NSString, NSDictionary, NSArray, MTLProfileControl, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLLinkedFunctions;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {
    struct MTLTileRenderPipelineDescriptorPrivate { MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; union { unsigned long long sampleCount; unsigned long long rasterSampleCount; } ; NSString *label; id<MTLFunction> tileFunction; BOOL threadgroupSizeMatchesTileSize; unsigned long long paddingToRemove; unsigned long long colorSampleCount; MTLPipelineBufferDescriptorArrayInternal *tileBuffers; unsigned short maxTotalThreadsPerThreadgroup; long long textureWriteRoundingMode; NSDictionary *pluginData; NSArray *binaryArchives; MTLLinkedFunctions *linkedFunctions; NSArray *preloadedLibraries; unsigned long long maxStackCallDepth; BOOL supportAddingBinaryFunctions; MTLProfileControl *profileControl; unsigned long long maxAccelerationStructureTraversalDepth; NSDictionary *gpuCompilerSPIOptions; } _private;
}

- (const struct MTLTileRenderPipelineDescriptorPrivate { id x0; union { unsigned long long x0; unsigned long long x1; } x1; id x2; id x3; BOOL x4; unsigned long long x5; unsigned long long x6; id x7; unsigned short x8; long long x9; id x10; id x11; id x12; id x13; unsigned long long x14; BOOL x15; id x16; unsigned long long x17; id x18; } *)_descriptorPrivate;
- (id)binaryArchives;
- (void)setBinaryArchives:(id)a0;
- (void)setPluginData:(id)a0;
- (id)pluginData;
- (id)formattedDescription:(unsigned long long)a0;
- (void)validateWithDevice:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (unsigned long long)maxAccelerationStructureTraversalDepth;
- (void)reset;
- (void)dealloc;
- (void)setMaxCallStackDepth:(unsigned long long)a0;
- (id)insertLibraries;
- (void)setPreloadedLibraries:(id)a0;
- (void)setSampleCount:(unsigned long long)a0;
- (void)setRasterSampleCount:(unsigned long long)a0;
- (void)setTextureWriteRoundingMode:(long long)a0;
- (void)setLinkedFunctions:(id)a0;
- (unsigned long long)sampleCount;
- (id)label;
- (id)newPipelineScript;
- (id)linkedFunctions;
- (void)setLabel:(id)a0;
- (unsigned long long)colorSampleCount;
- (BOOL)threadgroupSizeMatchesTileSize;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)a0;
- (id)description;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (id)preloadedLibraries;
- (void)setGpuCompilerSPIOptions:(id)a0;
- (unsigned long long)maxCallStackDepth;
- (long long)textureWriteRoundingMode;
- (BOOL)validateWithDevice:(id)a0 error:(id *)a1;
- (void)setSupportAddingBinaryFunctions:(BOOL)a0;
- (id)gpuCompilerSPIOptions;
- (void)setColorSampleCount:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (BOOL)supportAddingBinaryFunctions;
- (id)colorAttachments;
- (id)profileControl;
- (void)setProfileControl:(id)a0;
- (unsigned long long)rasterSampleCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInsertLibraries:(id)a0;
- (id)newSerializedTileDataWithFlags:(unsigned long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)setThreadgroupSizeMatchesTileSize:(BOOL)a0;
- (void)setTileFunction:(id)a0;
- (id)tileBuffers;
- (id)tileFunction;

@end
