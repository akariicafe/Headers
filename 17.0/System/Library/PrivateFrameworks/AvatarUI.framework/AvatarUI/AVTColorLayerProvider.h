@interface AVTColorLayerProvider : NSObject

- (id /* block */)providerForColorIntoLayer;
- (id /* block */)providerForGradientFromColor;
- (void)renderColorForColorPreset:(id)a0 skinColor:(id)a1 intoLayer:(id)a2;
- (void)renderColorGradientForModelColor:(id)a0 skinColor:(id)a1 handler:(id /* block */)a2;

@end
