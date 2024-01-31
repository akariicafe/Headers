@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent

@property (retain) CUIPSDGradient *gradient;

- (id)init;
- (void)dealloc;
- (unsigned int)effectType;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;

@end
