@interface TSTTableStyle : TSSStyle

+ (id)properties;
+ (void)initDefaultPropertyMap:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)a0 presetIndex:(unsigned long long)a1 colors:(id)a2;
+ (id)nonEmphasisTableProperties;
+ (void)p_populateParagraphStyle:(id)a0;
+ (id)propertiesAllowingNSNull;
+ (id)styleIDForPreset:(unsigned long long)a0;

- (void)validate;
- (void)dealloc;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)a0;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)a0;
- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (SEL)mapThemePropertyMapSelector;
- (unsigned int)maskForStrokePreset:(unsigned long long)a0;
- (id)strokeForStrokePreset:(unsigned long long)a0;
- (id)verticalStrokeForStrokePreset:(unsigned long long)a0;

@end
