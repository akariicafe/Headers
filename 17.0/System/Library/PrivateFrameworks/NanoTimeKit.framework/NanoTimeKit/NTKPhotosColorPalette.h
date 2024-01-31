@class UIColor;

@interface NTKPhotosColorPalette : NTKFaceColorPalette

@property (readonly, nonatomic) UIColor *monocolorRampColor;

+ (void)applyColorRamp:(id)a0 colorRampAmount:(double)a1 monochromeColorMatrix:(id)a2 toView:(id)a3;
+ (void)colorRampForMonochromeColorMatrix:(id)a0 fromPalette:(id)a1 toPalette:(id)a2 transitionFraction:(double)a3 completion:(id /* block */)a4;
+ (void)removeColorRampFromView:(id)a0;

- (id)imageAsset;
- (id)colorRampsIndex;
- (BOOL)isOriginalColor;
- (id)_monocolorRampColor;
- (id)colorRampImage;
- (id)colorRampsIndexByColorName;
- (id)monocolorRampImage;
- (id)swatchImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)swatchPrimaryColor;

@end
