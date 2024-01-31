@class NSString, NSDictionary, UIImage, AVTVaryingColor, AVTMaterial;

@interface AVTColorPreset : NSObject {
    long long _category;
    NSDictionary *_propertyColors;
    NSDictionary *_derivedColors;
    AVTVaryingColor *_previewColor;
    AVTVaryingColor *_previewAccentColor;
    unsigned long long _previewAccentType;
    float _variation;
    AVTMaterial *_material;
}

@property (readonly) NSString *name;
@property (readonly) NSString *localizedName;
@property (readonly) UIImage *thumbnail;
@property (readonly) long long category;
@property (readonly) float variation;

+ (id)colorPresetWithName:(id)a0 category:(long long)a1 colorIndex:(unsigned long long)a2 variation:(float)a3;
+ (id)colorPresetWithName:(id)a0 category:(long long)a1 variation:(float)a2;
+ (id)colorPresetsForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
+ (id)_colorPresetsForCategory:(long long)a0 palette:(id)a1;
+ (id)colorPresetWithName:(id)a0 category:(long long)a1;
+ (id)colorPresetsForCategory:(long long)a0;
+ (id)fallbackColorPresetForNilPresetAndCategory:(long long)a0 colorIndex:(unsigned long long)a1;
+ (id)secondaryColorPresetWithName:(id)a0 category:(long long)a1 variation:(float)a2;
+ (id)secondaryColorPresetsForCategory:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)baseColor;
- (id)colorPresetWithVariation:(float)a0;
- (id)derivedColorNameForPresetCategory:(long long)a0;
- (id)gradientLayerWithRangeMin:(float)a0 max:(float)a1 withSkinColor:(id)a2;
- (void)renderColorIntoCALayer:(id)a0 withSkinColor:(id)a1;
- (void)enumerateDerivedColorPresetsUsingBlock:(id /* block */)a0;
- (id)gradientLayerWithRangeMin:(float)a0 max:(float)a1;
- (id)initWithCategory:(long long)a0 description:(id)a1;
- (BOOL)isNaturalLipsColor;
- (id)makeMaterial;
- (id)previewAccentColor;
- (id)previewColor;
- (BOOL)shouldBlendWithSkinColor;

@end
