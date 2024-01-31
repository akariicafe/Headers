@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject

@property (retain) NSString *name;
@property BOOL visible;

- (void)dealloc;
- (unsigned int)effectType;
- (id)_colorFromShapeEffectValue:(union { double x0; unsigned long long x1; struct _rgbcolor { unsigned char x0; unsigned char x1; unsigned char x2; } x2; short x3; unsigned int x4; })a0;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;

@end
