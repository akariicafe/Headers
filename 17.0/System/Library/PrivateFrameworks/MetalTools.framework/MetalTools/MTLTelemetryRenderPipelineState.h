@class NSSet, MTLTelemetryDevice;

@interface MTLTelemetryRenderPipelineState : MTLToolsRenderPipelineState {
    unsigned int uniqueID;
    MTLTelemetryDevice *device;
    BOOL hasAnisoConstantSampler;
    NSSet *activeFragmentSamplers;
    NSSet *activeFragmentTextures;
}

+ (unsigned int)generateUniqueID;

- (void)dealloc;
- (void)accumulateUsage;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1 parent:(id)a2 descriptor:(id)a3;

@end
