@interface TSCHChartAxisStyle : TSCHBaseStyle

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)identifierForCategoryStyleWithRoleIndex:(unsigned long long)a0 ordinal:(unsigned long long)a1;
+ (id)identifierForValueStyleWithRoleIndex:(unsigned long long)a0 ordinal:(unsigned long long)a1;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)a0;
+ (id)presetStyleDescriptorForCategoryStyleOrdinal:(unsigned long long)a0;
+ (id)presetStyleDescriptorForValueStyleOrdinal:(unsigned long long)a0;

- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)a0;
- (void)p_upgrade3DChartPropertiesFrom2DProperties:(id)a0;
- (void)p_upgradeRadarChartAxisProperties:(id)a0;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)a0;

@end
