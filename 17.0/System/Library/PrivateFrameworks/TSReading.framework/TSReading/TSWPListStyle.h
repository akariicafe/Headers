@class NSString;

@interface TSWPListStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (id)CJKListNameForNumberType:(int)a0;
+ (id)defaultLabelGeometries;
+ (id)defaultLabelIndents;
+ (int)defaultLabelNumberType;
+ (id)defaultLabelString;
+ (id)defaultMissingBulletImage;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)a0 type:(int)a1;
+ (id)defaultTextIndents;
+ (BOOL)defaultTieredNumber;
+ (int)effectiveTypeForLevel:(unsigned long long)a0 forPropertyMapping:(id)a1;
+ (int)firstLabelTypeForPropertyMapping:(id)a0;
+ (id)harvardStyleWithContext:(id)a0;
+ (BOOL)isDefaultMissingBulletImage:(id)a0;
+ (int)labelTypeForLevel:(unsigned long long)a0 forPropertyMapping:(id)a1;
+ (id)listStyleWithNumberType:(int)a0 inStyleSheet:(id)a1 withNumberedPresetStyle:(id)a2;
+ (id)numberedlistStyleForPresets:(id)a0;
+ (id)pDefaultLabelValuesForLabelTypeProperty:(int)a0;
+ (void)pGetDefaultTextIndentFloats:(double[9])a0;
+ (id)pLabelTypeArrayForType:(int)a0;
+ (int)pLabelTypeForLevel:(unsigned long long)a0 forPropertyMapping:(id)a1 includeDegenerateLevels:(BOOL)a2;
+ (id)presetStyleDescriptor;
+ (id)propertiesAllowingNSNull;
+ (id)propertyMapForListNumberType:(int)a0;
+ (id)stickyOverrideProperties;

- (id)baseStyleForTopicNumbers;
- (int)effectiveTypeForLevel:(unsigned long long)a0;
- (int)firstLabelType;
- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (double)labelIndentForLevel:(unsigned long long)a0;
- (int)labelTypeForLevel:(unsigned long long)a0;
- (id)overridePropertyMapWithValue:(id)a0 forProperty:(int)a1 atParagraphLevels:(id)a2 withContext:(id)a3;
- (id)pOverrideArrayWithValue:(id)a0 forProperty:(int)a1 atParagraphLevels:(id)a2 withContext:(id)a3;
- (double)textIndentForLevel:(unsigned long long)a0 fontSize:(double)a1;

@end
