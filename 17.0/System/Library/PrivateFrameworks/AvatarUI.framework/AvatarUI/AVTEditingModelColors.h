@class NSDictionary, AVTAvatarColorVariationStore;

@interface AVTEditingModelColors : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *storage;
@property (retain, nonatomic) AVTAvatarColorVariationStore *variationStore;

+ (id)buildAllColors;
+ (void)createColorsForPaletteCategory:(long long)a0 inCache:(id)a1 withDerivedPaletteCategories:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)colorHasDerivedColorDependency:(id)a0;
- (id)colorForSettingKind:(struct { long long x0; long long x1; })a0 identifier:(id)a1;
- (id)initWithStorage:(id)a0 variationStore:(id)a1;
- (id)colorsForSettingKind:(struct { long long x0; long long x1; })a0;

@end
