@class NSDictionary;

@interface PXMemoriesFontsSpec : NSObject

@property (readonly, nonatomic) NSDictionary *titleTextAttributes;
@property (readonly, nonatomic) NSDictionary *fallbackTitleTextAttributes;
@property (readonly, nonatomic) NSDictionary *subtitleTextAttributes;
@property (readonly, nonatomic) double baselineDistance;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

+ (id)_fontSetByTitleFontName;
+ (id)_fontSpecCache;
+ (void)_getSpecSet:(out long long *)a0 variant:(out long long *)a1 forDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a2 extendedTraitCollection:(id)a3;
+ (long long)_memoryLabelKindForDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a0;
+ (double)_playButtonPaddingForFontSet:(long long)a0 specSet:(long long)a1 variant:(long long)a2 deviceMargin:(double)a3 forHeaderTile:(BOOL)a4;
+ (id)_titleFontNameByFontSet;
+ (double)baselineDistanceForFontSet:(long long)a0 specSet:(long long)a1 variant:(long long)a2 size:(struct CGSize { double x0; double x1; })a3 shouldScale:(BOOL)a4;
+ (long long)capitalizationStyleForLabelKind:(long long)a0;
+ (id)memoriesFontsSpecForDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a0 extendedTraitCollection:(id)a1;
+ (long long)numberOfLinesForLabelKind:(long long)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingForFontSet:(long long)a0 specSet:(long long)a1 variant:(long long)a2 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 width:(double)a4 shouldScale:(BOOL)a5 forHeaderTile:(BOOL)a6;
+ (void)preloadFontsSpecsForExtendedTraitCollection:(id)a0;
+ (id)supportedTitleFontNames;
+ (id)textAttributesForFontName:(id)a0 fontSize:(double)a1 lineHeight:(double)a2 tracking:(double)a3 stroke:(double)a4 shadow:(id)a5 capitalizationStyle:(long long)a6;
+ (id)textAttributesForFontSet:(long long)a0 specSet:(long long)a1 labelKind:(long long)a2 variant:(long long)a3 size:(struct CGSize { double x0; double x1; })a4 shouldScale:(BOOL)a5;

- (id)_initWithIdentifier:(struct PXMemoryFontsSpecIdentifier { long long x0; long long x1; long long x2; struct CGSize { double x0; double x1; } x3; double x4; BOOL x5; })a0;
- (void).cxx_destruct;

@end
