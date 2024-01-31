@class NSSet;

@interface TSCHStyleBootstrapping : NSObject <TSSPresetSource>

@property (class, readonly, nonatomic) NSSet *presetKinds;

+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2 reservedCount:(unsigned long long)a3;
+ (void)bootstrapStylesInStylesheet:(id)a0 numberOfPresets:(unsigned long long)a1;
+ (id)p_bootstrappedStylePresetInContext:(id)a0 stylesheet:(id)a1 presetIndex:(unsigned long long)a2;
+ (id)p_defaultParagraphStyleOfClass:(Class)a0 stylesheet:(id)a1 identifier:(id)a2;
+ (id)p_defaultStyleOfClass:(Class)a0 stylesheet:(id)a1 identifier:(id)a2;
+ (id)stylePresetForStylesheet:(id)a0 roleIndex:(unsigned long long)a1;

@end
