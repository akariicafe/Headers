@interface PVVideoCompositingExporter : PVVideoCompositing

- (id)init;
- (id)requiredPixelBufferAttributesForRenderContext;
- (id)preferredDestinationPixelBufferFormat;
- (void)setupEffectScheduler;
- (void)setupTextureFactories;

@end
