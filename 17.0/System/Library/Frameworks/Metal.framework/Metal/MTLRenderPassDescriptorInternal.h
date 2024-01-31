@class NSArray, MTLRenderPassColorAttachmentDescriptorArrayInternal, MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal;
@protocol MTLRasterizationRateMap, MTLBuffer;

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {
    struct MTLRenderPassDescriptorPrivate { MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments; id<MTLBuffer> visibilityResultBuffer; unsigned long long renderTargetWidth; unsigned long long renderTargetHeight; unsigned long long defaultColorSampleCount; BOOL fineGrainedBackgroundVisibilityEnabled; BOOL skipEmptyTilesOnClearEnabled; BOOL ditherEnabled; BOOL openGLModeEnabled; unsigned long long renderTargetArrayLength; unsigned long long tileWidth; unsigned long long tileHeight; union { unsigned long long defaultSampleCount; unsigned long long defaultRasterSampleCount; } ; unsigned long long imageBlockSampleLength; unsigned long long threadgroupMemoryLength; struct { float x; float y; } customSamplePositions[4]; unsigned long long numCustomSamplePositions; id<MTLRasterizationRateMap> rasterizationRateMap; MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; BOOL pointCoordYFlipEnabled; NSArray *binaryArchives; } _private;
}

+ (id)renderPassDescriptor;

- (BOOL)openGLModeEnabled;
- (const struct MTLRenderPassDescriptorPrivate { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; union { unsigned long long x0; unsigned long long x1; } x12; unsigned long long x13; unsigned long long x14; struct { float x0; float x1; } x15[4]; unsigned long long x16; id x17; id x18; BOOL x19; id x20; } *)_descriptorPrivate;
- (id)binaryArchives;
- (void)setBinaryArchives:(id)a0;
- (void)setOpenGLModeEnabled:(BOOL)a0;
- (BOOL)fineGrainedBackgroundVisibilityEnabled;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setSamplePositions:(const struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (id)init;
- (id)visibilityResultBuffer;
- (void)setRenderTargetHeight:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)stencilAttachment;
- (void)setTileHeight:(unsigned long long)a0;
- (void)setRenderTargetWidth:(unsigned long long)a0;
- (void)setDitherEnabled:(BOOL)a0;
- (id)depthAttachment;
- (unsigned long long)getSamplePositions:(struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)a0;
- (id)sampleBufferAttachments;
- (void)setTileWidth:(unsigned long long)a0;
- (void)setVisibilityResultBuffer:(id)a0;
- (BOOL)isDitherEnabled;
- (void)setDefaultRasterSampleCount:(unsigned long long)a0;
- (void)setDefaultColorSampleCount:(unsigned long long)a0;
- (void)setDepthAttachment:(id)a0;
- (id)description;
- (void)setRenderTargetArrayLength:(unsigned long long)a0;
- (unsigned long long)defaultColorSampleCount;
- (BOOL)skipEmptyTilesOnClearEnabled;
- (unsigned long long)tileWidth;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0;
- (BOOL)pointCoordYFlipEnabled;
- (unsigned long long)renderTargetArrayLength;
- (BOOL)validate:(id)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)renderTargetWidth;
- (unsigned long long)threadgroupMemoryLength;
- (unsigned long long)renderTargetHeight;
- (id)colorAttachments;
- (void)setRasterizationRateMap:(id)a0;
- (unsigned long long)tileHeight;
- (void)setStencilAttachment:(id)a0;
- (unsigned long long)imageblockSampleLength;
- (void)setImageblockSampleLength:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)defaultRasterSampleCount;
- (void)setPointCoordYFlipEnabled:(BOOL)a0;
- (id)rasterizationRateMap;
- (void)setSkipEmptyTilesOnClearEnabled:(BOOL)a0;

@end
