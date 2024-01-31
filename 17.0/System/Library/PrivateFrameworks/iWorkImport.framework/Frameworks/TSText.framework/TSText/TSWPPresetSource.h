@class NSSet;

@interface TSWPPresetSource : NSObject <TSSPresetSource>

@property (class, readonly, nonatomic) NSSet *presetKinds;

+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;
+ (void)p_bootstrapDropCapStylePresetsInTheme:(id)a0 alternate:(unsigned long long)a1;
+ (void)p_bootstrapLinePresetsInTheme:(id)a0 alternate:(unsigned long long)a1;
+ (void)p_bootstrapListPresetsInTheme:(id)a0 alternate:(unsigned long long)a1;
+ (void)p_bootstrapShapePresetsInTheme:(id)a0 alternate:(unsigned long long)a1;
+ (id)p_bootstrapStrokeInTheme:(id)a0 alternate:(unsigned long long)a1 index:(unsigned long long)a2;
+ (void)p_bootstrapTextStylePresetsInTheme:(id)a0 alternate:(unsigned long long)a1;
+ (void)p_bootstrapTextboxPresetsInTheme:(id)a0 alternate:(unsigned long long)a1;

@end
