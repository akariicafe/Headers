@class NSString, NSDictionary, NSArray;

@interface AVTPreset : NSObject {
    long long _category;
    NSString *_identifier;
    NSArray *_assets;
    NSString *_morphVariant;
    NSString *_imageVariant;
    NSString *_materialVariant;
    float _morphVariantIntensity;
    float _bodyPoseVariantIntensity;
    float _textureAssetPresence;
    BOOL _mirrored;
    NSArray *_dependencies;
    NSDictionary *_assetSpecificMorphVariantDependencies;
    NSDictionary *_assetSpecificImageVariantDependencies;
    NSDictionary *_assetSpecificMaterialVariantDependencies;
    NSDictionary *_presetSpecificPresetDependencies;
}

@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayableName;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedPairedName;
@property (readonly, nonatomic) BOOL hasComponent;
@property (readonly, nonatomic) unsigned long long editableColorCount;
@property (readonly, nonatomic) NSDictionary *tags;
@property (readonly) NSDictionary *specializationSettings;

+ (id)availablePresetsForCategory:(long long)a0;
+ (id)colorPresetsForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
+ (id)presetWithCategory:(long long)a0 identifier:(id)a1;
+ (id)colorPresetsForCategory:(long long)a0;
+ (unsigned long long)editableColorCountForCategory:(long long)a0;
+ (id)secondaryColorPresetsForCategory:(long long)a0;

- (id)cache;
- (id)assets;
- (id)description;
- (void).cxx_destruct;
- (void)applyPresetByChangingComponentsOfMemoji:(id)a0 animated:(BOOL)a1;
- (void)enumerateAssetSpecificVariantDependenciesOfKind:(unsigned long long)a0 block:(id /* block */)a1;
- (void)enumeratePresetDependencies:(id /* block */)a0;
- (void)enumeratePresetSpecificPresetDependencies:(id /* block */)a0;
- (void)enumerateVariantDependenciesOfKind:(unsigned long long)a0 block:(id /* block */)a1;
- (void)enumerateVisibilityDependencies:(id /* block */)a0;
- (void)rebuildSpecializationSettings;

@end
